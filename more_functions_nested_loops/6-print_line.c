#include "main.h"
/**
 *print_line- line print.
 *@n: num of _ to be printed.
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar(95);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}

