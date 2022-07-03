#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*
*Return: Always 0 (success)
*
*/

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		putchar("%c", low);
		low++
	}
	putchar("\n");
	return (0);
}

