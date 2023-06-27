#include "main.h"
/**
 *_isalpha- Verify lowercase
 *@c: character to be verified
 *Return: always 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
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
