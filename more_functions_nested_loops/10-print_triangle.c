#include "main.h"
/**
 *
 *
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for(j = size; j >= 1; j--)
		{
			if (i >= j)
				_putchar(35);
			else
				_putchar(' ');
		}
	_putchar('\n');
	}
}
