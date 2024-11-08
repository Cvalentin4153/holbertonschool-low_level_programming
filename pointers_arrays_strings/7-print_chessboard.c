#include "main.h"
/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: This function prints an 8x8 chessboard represented by
 * a 2D array of characters. Each element in the array represents a square
 * on the board. After each row, a newline is printed to format the board.
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		col = 0;
		for (col = 0; col < 8; col++)
		{
		_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
