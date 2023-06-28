#include "main.h"
/**
 *_isdigit- checking digit.
 *@c: digit
 *Return: digit determines
 */
int _isdigit(int c)
{
	if (c >= 30 && c <= 57)
		return (1);
	else
		return (0);
}
