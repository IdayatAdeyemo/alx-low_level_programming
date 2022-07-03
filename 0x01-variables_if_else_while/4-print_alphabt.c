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

	while (low <= 'z'; low++)
		if ((low == 'e') || (low == 'q'))
		{
			continue;
		}
		else
		{
			putchar(low);
		}
		putchar('\n');
		return (0);
}

