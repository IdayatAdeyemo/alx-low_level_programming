#include "main.h"

/**_isalpha - check Holberton
*@c: an input character
*decription: function return 1 if the character is a letter,lowercase or upperca*se
*Return: 1 or 0 in otherwise.
*
*/

int _isalpha(int c)
{
	char lower, upper;
	int islet = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				islet = 1;
			}
		}
	}

	return (islet);
}

