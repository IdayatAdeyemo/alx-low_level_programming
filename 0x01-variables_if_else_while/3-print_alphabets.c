#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
* return: always 0 (success)
*
*/
int main(void)
{
	char low = 'a';
	char high = 'A';

	for (low <= 'z')
	{
		putchar("%c", low);
		low++;
	}
	for (high <= 'Z')
	{
		putchar("%c", high)
			high++
	}
	putchar("\n");
	return (0);
}
