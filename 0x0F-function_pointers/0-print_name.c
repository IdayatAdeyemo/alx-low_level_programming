#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name:name to print
 * @f: a function pointer that hold address of the called function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}


