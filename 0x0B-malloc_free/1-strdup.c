#include "main.h"

/**
 *strlen - get number of characters in the string
 *strcpy - copy string 
 *strdup - pointer that returns the address of memory from malloc
 *@s: array of element passed
 *@dest: the memory allocated by malloc
 *@str: array of elements
 *Return: pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = strlen(str) + 1;

dst = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
return (NULL);
}
strcpy(dst, str);
return (dst);
}
