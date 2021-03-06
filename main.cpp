#include "raylib.h"

#include "sim_data.hpp"
#include "scenario_parser.hpp"
#include "draw_engine.hpp"

#include <iostream>

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screen_width = 800;
    const int screen_height = 600;


    SimulationData simdata;

    auto file_is_ok = load_scenario_file("sc1.txt", simdata);

    if (!file_is_ok)
    {
        std::cout << "Unable to load scenario file.\n";
        return -1;
    }


    InitWindow(screen_width, screen_height, "Mobile Radio Visualization");
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

        bool sim_done = update_simulation(simdata, GetFrameTime());
        if (sim_done)
        {
            break;
        }



        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            draw_sim_data(simdata);

            //DrawFPS(10, 10);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
