#include <stdio.h>
/**
 *main- Entry point
 *Return:always 0
*/
int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z' ; a_z++)
	{
		if (a_z != 'q' && a_z != 'e')
			putchar(a_z);
	}
putchar('\n');
return (0);
}
