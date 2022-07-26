#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - Entry point
 * @argc: argument count of inputs
 * @argv: takes the number as string and convert to int for addition
 *
 * Return: always 0(success)
 */

int main(int argc, char *argv[])
{
	int i;
	int convt;
	int add = 0;
	int a;
	/**int j;*/

	for (a = 1; a < argc; a++)
	{
		convt = atoi(argv[a]);
	}
	if ((argc - 1) > 1)
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else if (!isdigit(convt))
		printf("Error\n");

	else if  ((argc - 1) < 1)
		printf("0\n");

	else
		printf(" ");
	
	/**else
	{
		for (j = 1; j < argc; j++)
		{
			if (!isdigit(atoi(argv[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}*/
	return (0);
}
