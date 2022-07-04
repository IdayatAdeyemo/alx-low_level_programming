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
	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = k + 1; k <= '9'; k++)
			{
				if ((p != d) != q)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && p == '8')
						continue;

					putchar(';');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

