#include "main.h"
/**
 *_islower- Verify lowercase
 *@c: character to be verified
 *Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

_putchar('\n');
return (0);
}
