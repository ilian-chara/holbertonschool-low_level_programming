#include "main.h"
/**
* print_chessboard - will print a chessboard
* @a: pointer to an array of 8
*
*
*/

void print_chessboard(char (*a)[8])
{
	int h, v;

	for (h = 0; h < 8; h++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar(a[h][v]);
		}
		_putchar('\n');
	}
}
