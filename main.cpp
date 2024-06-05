#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iomanip>
#include <chrono>

#include "types.h"
#include "StatewithBDDEdges.h"
#include "TAwithBDDEdges.h"
#include "FixpointwithBDDEdges.h"

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

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    monitaal::TAwithBDDEdges pos = build_ta_from_main(original_formula);
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

   
    std::cout << "Constructing TA (with BDD transitions) took = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << "[ms]" << std::endl;

    std::chrono::steady_clock::time_point begin2 = std::chrono::steady_clock::now();
    std::cout << "<<<<<< Calculating fixpoints >>>>>>" << std::endl;
    auto recurrent = monitaal::FixpointwithBDDEdges::buchi_accept_fixpoint(pos);

    // TODO: This is a temporary adjustment in response to the off-by-one error
    // introduced by https://github.com/DEIS-Tools/MoniTAal/commit/2207cb9

    auto initial_state = monitaal::bdd_symbolic_state_t(pos.initial_location(), monitaal::Federation::zero(pos.number_of_clocks() - 1));


    if (initial_state.is_included_in(monitaal::FixpointwithBDDEdges::reach(recurrent, pos))) {

        std::cout << "SATISFIABLE" << std::endl;

    } else {

        std::cout << "NOT SATISFIABLE" << std::endl;

    }

    std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();
    std::cout << "Fixpoint took = " << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - begin2).count() << "[ms]" << std::endl;


    bdd_done();

    return 0;

}
