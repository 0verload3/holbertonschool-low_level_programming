#include <stdio.h>
/**
 *main- entry point
 *Return: always 0
 */
int main(void)
{
	char zA;

	for (zA = 'z'; zA >= 'a'; zA--)
		putchar(zA);
putchar('\n');
return (0);
}
