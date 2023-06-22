#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @sz: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int sz)
{
	if (sz <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0; x < sz; x++)
		{
			for (y = 0; y < sz; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
