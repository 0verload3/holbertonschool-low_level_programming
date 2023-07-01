#include <stdio.h>
/**
 *main- entry point.
 *for multiples of three print Fizz instead of the number and
 *for the multiples of five print Buzz.
 *For numbers which are multiples of both three and five print FizzBuzz.
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i != 101)
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
