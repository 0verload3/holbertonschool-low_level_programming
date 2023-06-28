#include "main.h"
/**
 *_isupper- verifies uppercase
 *@c: Char to be checked
 *Return: if-else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
