#include "main.h"
/**
 *times_table- multp
 *
 */
void times_table(void)
{
	int n, x, m, d, e, f;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (x = 1; x < 10; x++)
		{
			m = x * n;
			d = m / 10;
			f = m % 10;
			e = ' ';
		_putchar(44);
		_putchar(e);
		if (m < 10)
		{
			_putchar(e);
			_putchar(m + '0');
		}
		else
		{
			_putchar(d + '0');
			_putchar(f + '0');
		}
		}
	_putchar('\n');
	}
}
