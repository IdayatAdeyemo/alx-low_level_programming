#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc:argument count
 * @argv:print all argument entries
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if ((argc - 1) > 1)
	{
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


