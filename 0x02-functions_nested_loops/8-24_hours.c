#include "main.h"

/**
 * jack_bauer - check main
 * description: fuction  prints every minutes in one day
 * return: nothing
 */

void jack_baurer(void)
{
	int H, Z;
	
	for (H = 0; H < 24; h++)
	{
		for (Z = 0; Z < 60; Z++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((Z / 10) + '10');
			_putchar((Z % 10) + '10');
			_putchar('\n');

		}
	}
}
