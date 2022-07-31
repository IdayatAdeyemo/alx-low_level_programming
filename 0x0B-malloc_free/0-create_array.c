#include "main.h"
/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

for (i = 0; i < size; i++) /*for loop for array*/
{
	buffer[i] = c;
}

return (buffer);

}
