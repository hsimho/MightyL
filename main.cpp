#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iomanip>

#include "types.h"
#include "TA.h"

#include "MightyL.h"

#include "Monitor.h"
#include "Parser.h"

using namespace mightylcpp;
using namespace antlr4;


int main(int argc, const char ** argv) {

    const char* spec_file;
    const char* trace_file;

    if (argc >= 2) {

        spec_file = argv[1];

    } else {

        std::cerr << "Usage: demo <in_spec_file>" << std::endl;
        return 1;

    }

    std::ifstream spec_in(spec_file, std::ios::in);
    if (!spec_in) {

        std::cerr << "Error: Could not open in_spec_file" << std::endl;
        return 1;

    }

    bdd_init(1000, 100);

    std::cout << "\n<<<<<< Pre-processing input formula... >>>>>>\n\n";

    std::cout << "\nInput formula (as read from input):\n";

    std::stringstream buf;
    buf << spec_in.rdbuf();
    std::cout << buf.str();

    std::string nnf_in = buf.str();

    ANTLRInputStream input(nnf_in);
    MitlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    MitlParser parser(&tokens);

    MitlParser::MainContext* original_formula = parser.main();

    monitaal::TA pos = build_ta_from_main(original_formula);

    nnf_in = "!(" + nnf_in + ")";

    input.load(nnf_in);
    lexer.setInputStream(&input);
    tokens.setTokenSource(&lexer);
    parser.setTokenStream(&tokens);
    original_formula = parser.main();

    monitaal::TA neg = build_ta_from_main(original_formula);

    std::cout << "\npos:\n" << std::endl;
    std::cout << pos;

    std::cout << "\nneg:\n" << std::endl;
    std::cout << neg;

    // std::cout << std::endl;

    // std::cout << std::setw(20) << "# of locations: " << std::setw(10) << projected.locations().size() << std::setw(0) << std::endl;
    // std::cout << std::setw(20) << "# of clocks: " << std::setw(10) << projected.locations().size() << std::setw(0) << std::endl;

    // std::cout << std::endl;

    // for (const auto & [k, v] : projected.locations()) {

    //     std::cout << std::setw(12) << "location: " << std::setw(10) << v.id() << " (" << v.name() << ")" << (v.is_accept() ? "(acc)" : "") << std::setw(0) << std::endl;
    //     std::cout << std::setw(20) << "# outgoing: " << std::setw(10) << projected.edges_from(k).size() << std::setw(0) << std::endl;
    //     std::cout << std::setw(20) << "# incoming: " << std::setw(10) << projected.edges_to(k).size() << std::setw(0) << std::endl;

    // }

    // std::cout << projected;
    //
    std::cout << "<<<<<< Calculating fixpoints >>>>>>\n\nPositive fixpoint states:\n";
    monitaal::Fixpoint::buchi_accept_fixpoint(pos).print(std::cout, pos);

    std::cout << "Negative fixpoint states:\n";
    monitaal::Fixpoint::buchi_accept_fixpoint(neg).print(std::cout, neg);

    std::cout << "<<<<<< Monitoring >>>>>>\n\n";
    std::vector<monitaal::concrete_input> word1 = {
        monitaal::concrete_input(0, "00000"),
        monitaal::concrete_input(2.5, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(2.1, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(5, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(2.1, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(5, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(1, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(2.1, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(5, "00000"),
        monitaal::concrete_input(10, "00000"),
        monitaal::concrete_input(1, "00000"),
        monitaal::concrete_input(1, "00000")};

//    std::vector<monitaal::concrete_input> word2 = {
//        monitaal::concrete_input(0, "000"),
//        monitaal::concrete_input(101, "000")};

    monitaal::Concrete_monitor monitor(pos, neg);

    // std::cout << "Monitoring word: ";
    // for (const auto& c : word1)
    //     std::cout << "(" << c.label << ", " << c.time <<  ") ";


    for (const auto& e : word1) {

        monitor.input(e);

        std::cout << "\nInput event read: " << "(" <<  e.label << ", " <<  e.time << ")" << std::endl;

        std::cout << "\nConclusion: " << monitor.status() << "\nState estimate positive:\n";
        
        int i;
        if (monitor.positive_state_estimate().empty())
            std::cout << "empty\n";
        else
            for (const auto& s : monitor.positive_state_estimate()) {
                std::cout << pos.locations().at(s.location()).name() << " : ";
                i = 0;
                for (const auto& v : s.valuation())
                    std::cout << pos.clock_name(i++) << " = " << v << ", ";
                std::cout << "\n";
            }

        std::cout << "State estimate negative:\n";
        if (monitor.negative_state_estimate().empty())
            std::cout << "empty\n";
        else
            for (const auto& s : monitor.negative_state_estimate()) {
                std::cout << neg.locations().at(s.location()).name() << " : ";
                i = 0;
                for (const auto& v : s.valuation())
                    std::cout << neg.clock_name(i++) << " = " << v << ", ";
                std::cout << "\n";
            }

    }

    // std::cout << "\nMonitoring word: ";
    // for (const auto& c : word2)
    //     std::cout << "(" << c.label << ", " << c.time <<  ") ";

    // monitor.input(word2);

    // std::cout << "\nConclusion: " << monitor.status() << "\nState estimate positive:\n";

    // if (monitor.positive_state_estimate().empty())
    //     std::cout << "empty\n";
    // else
    //     for (const auto& s : monitor.positive_state_estimate()) {
    //         std::cout << pos.locations().at(s.location()).name() << " : ";
    //         i = 0;
    //         for (const auto& v : s.valuation())
    //             std::cout << pos.clock_name(i++) << " = " << v << ", ";
    //         std::cout << "\n";
    //     }

    // std::cout << "State estimate negative:\n";
    // if (monitor.negative_state_estimate().empty())
    //     std::cout << "empty\n";
    // else
    //     for (const auto& s : monitor.negative_state_estimate()) {
    //         std::cout << neg.locations().at(s.location()).name() << " : ";
    //         i = 0;
    //         for (const auto& v : s.valuation()) {
    //             std::cout << neg.clock_name(i++) << " = " << v << ", ";
    //         }
    //         std::cout << "\n";
    //     }

    bdd_done();

    return 0;

}
