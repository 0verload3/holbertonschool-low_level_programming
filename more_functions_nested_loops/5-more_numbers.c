#include "main.h"
/**
 *more_numbers- printing more mon.. mean nums
 */
void more_numbers(void)
{
	int l, n, fn, ln;

	for (l = 0; l < 10; l++)
	{
		for (n = 0; n <= 14; n++)
		{

			fn = n / 10;
			ln = n % 10;

			if (n >= 10)
			{
				_putchar(fn + '0');
			}
			_putchar(ln + '0');
		}
		_putchar('\n');
	}
}
