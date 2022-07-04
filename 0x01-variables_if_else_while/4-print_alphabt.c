#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point
*
*Return: value 0 (success)
*
*/

int main(void)
{
	char low, e, q;

	low = 'a';
	e = 'e';
	q = 'q';
	
	while (low <= 'z')
	{
		if (low != e)
		{
			if (low != q)
			{
				putchar(low);
				low++;
			}
		}
	}
	putchar('\n');
	return (0);
}
