#include "main.h"
/**
 *_abs- What most want.
 *@c: Integer Absolute
 *Return: absolute
 */
int _abs(int c)
{
	int x = (c * (-1));

	if (c < 0)
	{
		return(x);
	}
	else
		return (c);
}
