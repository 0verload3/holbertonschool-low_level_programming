#include <stdio.h>
/*Only Compile CFILE*/
int main(void)
{
	gcc -E $CFILE -o c
	return (0);
}
