#include "square_draw_engine.h"

void sd_horizontal_line(int x, int y, int size, int space, int num_sq, Color color)
{

	for (int cnt{0}; cnt < num_sq ; cnt++)
	{
		int step {size + space};
		DrawRectangle(x, y, size, size, color);
	    x += step;
	}


}

void sd_vertical_line(int x, int y, int size, int space, int num_sq, Color color)
{

	for(int cnt{0}; cnt<num_sq; cnt++)
	{
	    DrawRectangle(x, y, size, size, color);

	    y += size + space;
	}

}

void sd_rectangle(int x, int y, int sq_size, int sq_space, int width, int height, Color color)
{

//	int cnt {0};
//
//	for(int cy{0}; cy<height; cy++)
//	{
//		for(int cx{0}; cx<width; cx++)
//		{
//			int step {sq_space + sq_size};
//			int offset_x {cx*step};
//			int offset_y {cy*step};
//
//			//DrawCircle(x+offset_x, y+offset_y, 5, GREEN);
//
//			DrawText(TextFormat("cx=%d,cy=%d", cx,cy), x+offset_x, y+offset_y, 15, BLACK);
//			DrawText(TextFormat("cnt=%d", cnt), x+offset_x, y+offset_y+20, 15, BLACK);
//
//			cnt++;
//		}
//	}

	for (int cnt{0}; cnt < height; cnt++)
	{
		sd_horizontal_line(x, y , sq_size, sq_space, width, color);
		y = y + sq_size + sq_space;
	}



}

void sd_45deg_line(int x, int y, int sq_size, int sq_space, int length, Color color)
{

}


void sd_frame(int x, int y, int sq_size, int sq_space, int width, int height, Color color)
{

}

void sd_cross(int x, int y, int sq_size, int sq_space, int length, Color color)
{

}


void sd_payramid(int x, int y, int sq_size, int sq_space, int height, Color color)
{

}

void sd_diamond(int x, int y, int sq_size, int sq_space, int height, Color color)
{


}

void sd_chess_board(int x, int y, int sq_size, int sq_space, int width, int height, Color color1, Color color2)
{

}

