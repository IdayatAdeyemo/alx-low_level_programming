#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point
*
*return: always 0 (success)
*
*/

int main(void)
{
	char low;
	char high;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (high = 'A'; high <= 'Z'; high++)
	{
		putchar(high);
	}
	putchar('\n');
	return (0);
}
