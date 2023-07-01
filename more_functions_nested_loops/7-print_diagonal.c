#include "main.h"

/**
 * print_diagonal - I feel Like I am diagonally parked in a parallel universe.
 * @n: number of symbols to be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
				_putchar(92);
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}


