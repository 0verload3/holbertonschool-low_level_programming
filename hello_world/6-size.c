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
		printf("Size of a char: %u\n byte(s)", sizeof(e));
		printf("Size of an int: %u\n byte(s)", sizeof(a));
		printf("Size of a long int: %u\n byte(s)", sizeof(b));
		printf("Size of a long long int: %u\n byte(s)", sizeof(c));
		printf("Size of a float: %u\n bytes(s)", sizeof(d));
	return(0);
}
