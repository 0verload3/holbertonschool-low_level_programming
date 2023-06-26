#include "main.h"
/**
 *print_alphabet_x10 - print abc x3
 *
 */
void print_alphabet_x10(void)
{
	char alp;
	char spa;

	for (alp = 0;  alp <= 10; alp++)
	{
		for (spa = 'a'; spa <= 'z'; spa++)
		{
			_putchar(spa);
		}
		_putchar('\n');
	}
}

