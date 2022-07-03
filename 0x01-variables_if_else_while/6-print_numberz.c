#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Entry point
*
* Return: value 0 (success)
*/

int main(void)
{
	int a = 0;

	for (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
