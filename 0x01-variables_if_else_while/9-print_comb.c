#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: value 0 (success)
*
*/

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 57)
		{
			break;
		}
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
