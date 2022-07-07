#include "main.h"

/**
 * jack_bauer - print every minutes
 * description: fuction  prints every minutes in one day
 * return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int H, Z;

	for (H = 0; H < 24; H++)
	{
		for (Z = 0; Z < 60; Z++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((Z / 10) + '0');
			_putchar((Z % 10) + '0');
			_putchar('\n');

		}
	}
}
