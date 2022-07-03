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

	for (low < '='; 'z'; low++;)
	{
		putchar(low);
	}
	for (high < '='; 'Z'; high++;)
	{
		putchar(high);
	}
	putchar('\n');

	return (0);
}
