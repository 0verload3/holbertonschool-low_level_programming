#include <stdio.h>
/**
 *main- Entry Point
 *Return: always
 */
int main(void)
{
	char alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar (alpha);
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar (alpha);
putchar('\n');
return (0);
}
