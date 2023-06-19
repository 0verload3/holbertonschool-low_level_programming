#include <stdio.h>
/*
 *main- Entry point
 *
 *
 *Return-always 0
 * */int main(void)
{
	int a;
	long int b;
	long long int c;
	float d;
	char e;
		printf("Size of a char: %u byte(s)\n", sizeof(e));
		printf("Size of an int: %u byte(s)\n", sizeof(a));
		printf("Size of a long int: %u byte(s)\n", sizeof(b));
		printf("Size of a long long int: %u byte(s)\n", sizeof(c));
		printf("Size of a float: %u bytes(s)\n", sizeof(d));
	return(0);
}
