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
	char low = 'a';

	while (low <= 'z')
	{
		if ((low == 'e') || (low != 'q'))
		{
			putchar('continue');
		}
		putchar(low);
		low++;

		}
		putchar('\n');
		return (0);
}

