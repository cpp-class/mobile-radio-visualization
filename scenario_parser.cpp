#include "scenario_parser.hpp"
#include <fstream>
#include <sstream>
#include <iostream>


/*
 * Available Commands
 *
 * AddNode
 * SetNodeSpeed
 * SimEnd
 * SetMaxRadioRange
 *
 */


bool line_is_comment(const std::string& line) {
    std::stringstream ss { line };

    char c;
    ss >> c;

    if (!ss || c == '#') {
        return true;
    } else {
        return false;
    }
}


bool load_scenario_file(const std::string &file_name, SimulationData &sim_data)
{

    std::ifstream ifile(file_name);

    if (!ifile.is_open()) {
        std::cout << "ERROR: Unable to open file!\n";
        return false;
    }

    std::string cur_line;
    int line_number = 0;


    while (std::getline(ifile, cur_line)) {
        line_number++;
        // First check if line started with #. In this case

        if (line_is_comment(cur_line)) {
            // Ignore commented line
            continue;
        }

        std::stringstream ss { cur_line };

        std::string command;

        ss >> command;

        std::cout  << command << "   Line=" << line_number << "\n";

    }


    return true;
}
