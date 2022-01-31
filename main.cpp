#include "raylib.h"
#include "square_draw_engine.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screen_width = 800;
    const int screen_height = 600;


    InitWindow(screen_width, screen_height, "Draw Engine with Squares!");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

//            sd_horizontal_line(50, 50, 20, 10, 10, GREEN);
//            sd_vertical_line(50, 50, 18, 10, 12, RED);

            sd_rectangle(50, 50, 10, 1, 30, 18, RED);

            DrawFPS(10, 10);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
