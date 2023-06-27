#include "main.h"
/**
 * print_sign- no zodiac.
 * @n: char to be signed.
 * Return:0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		if (n != 4)

		{
			_putchar('+');
			return (1);
		}
	}
	if (n == 0)
	{
		if (n != 4)
		{
			_putchar('0');
			return (0);
		}
	}
	if (n < 0)
	{

		if (n != 4)
		{
			_putchar('-');
			return (-1);
		}
	}
	_putchar('\n');
	return (0);
}
