#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: char type
 */
void print_chessboard(char (*a)[8])
{
	int b, w;

	b = 0;
	while (b < 8)
	{
		w = 0;
		while (w < 8)
		{
			_putchar(a[b][w]);
			w++;
		}
		_putchar('\n');
		b++;
	}
}
