#include <stdio.h>
#include "main.h"
/**
 *print_to_98- print to
 *@n: number to check
 */
void print_to_98(int n)
{
	while (n > 98 || n < 98)
	{
		if (n > 98)
		{
			(n--);
			printf("%d, ", n);
		}
		else
		{
			(n++);
			printf("%d, ", n);
		}
	}
printf("\n");
}
