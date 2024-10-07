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
// #include "StatewithBDDEdges.h"
#include "TAwithBDDEdges.h"
// #include "FixpointwithBDDEdges.h"

#include "MightyL.h"

#include "Monitor.h"
#include "Parser.h"

using namespace mightylcpp;
using namespace antlr4;


int main(int argc, const char ** argv) {

    const char* spec_file = NULL;
    const char* tck_file = NULL;

    if (argc >= 2) {

        spec_file = argv[1];

        if (argc >= 3) {

            tck_file = argv[2]; 

        }

    } else {

        std::cerr << "Usage: demo <in_spec_file> [out_tck_file]" << std::endl;
        std::cerr << "A standard fixpoint algorithm based on DBMs (PARDIBAAL) is used by default." << std::endl;
        std::cerr << "If out_tck_file specified a (flattened) TChecker model will be generated instead." << std::endl;
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
    monitaal::TA pos = build_ta_from_main(original_formula);
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

   
    std::cout << "Constructing TA (with BDD transitions) took = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << "[ms]" << std::endl;
    // std::cout << pos << std::endl;


    if (tck_file == NULL) {

        std::chrono::steady_clock::time_point begin2 = std::chrono::steady_clock::now();
        std::cout << "<<<<<< Calculating fixpoints >>>>>>" << std::endl;
        auto recurrent = monitaal::Fixpoint::buchi_accept_fixpoint(pos);

        auto initial_state = monitaal::symbolic_state_t(pos.initial_location(), monitaal::Federation::zero(pos.number_of_clocks()));


        if (initial_state.is_included_in(monitaal::Fixpoint::reach(recurrent, pos))) {

            std::cout << "SATISFIABLE" << std::endl;

        } else {

            std::cout << "NOT SATISFIABLE" << std::endl;

        }

        std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();
        std::cout << "Fixpoint took = " << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - begin2).count() << "[ms]" << std::endl;

    } else { 

        std::ofstream tck_out(tck_file, std::ios::trunc);
        if (!tck_out) {

            std::cerr << "Error: Could not open out_tck_file" << std::endl;
            return 1;

        }




        tck_out.close();

    }

    bdd_done();
    spec_in.close();

    return 0;

}
