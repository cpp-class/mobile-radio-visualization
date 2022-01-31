#include "raylib.h"

// horizontal
void sd_horizontal_line(int x, int y, int size, int space, int num_sq, Color color)
{

	int cnt {0};

	while (cnt != num_sq)
	{
	    DrawRectangle(x, y, size, size, color);

	    x += size + space;
		cnt = cnt + 1;
	}

}

void sd_vertical_line(int x, int y, int size, int space, int num_sq, Color color)
{
	int cnt {0};

	while (cnt != num_sq)
	{
	    DrawRectangle(x, y, size, size, color);

	    y += size + space;
		cnt = cnt + 1;
	}
}

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

            sd_horizontal_line(50, 50, 20, 10, 10, GREEN);

            sd_vertical_line(50, 50, 18, 10, 12, RED);

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
