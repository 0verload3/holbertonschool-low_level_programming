#include "main.h"
/**
 *print_last_digit- name says
 *@l: last dig
 *Return: last dig
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l <= 0)
		return (l * (-1));
	else
		return (l);
}
