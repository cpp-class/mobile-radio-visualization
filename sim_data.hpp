#ifndef SIM_DATA_HPP_
#define SIM_DATA_HPP_

#include "raylib.h"
#include <string>
#include <vector>

struct Node
{
    std::string name;
    int shape; // 0:Circle, 1:Square
    Color color;

    double x;
    double y;
    double vx;
    double vy;
};

struct SpeedChangeEvent
{
    std::string target_node_name;
    double time;
    double vx;
    double vy;
};


struct SimulationData
{
    double max_radio_range {100.0};
    double max_sim_time {60.0};
    double cur_time {0.0};

    std::vector<Node> radio_nodes {};
    std::vector<SpeedChangeEvent> speed_events {};
};


/**
 * Update the simulation and increase the internal time.
 * Return true if simulation is ended
 */
bool update_simulation(SimulationData& sim_data, double elapsed_time);

#endif /* SIM_DATA_HPP_ */
