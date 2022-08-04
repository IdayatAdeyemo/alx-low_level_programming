#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name:name of the person.
 * @f: a function pointer that hold address of the called function
 *
 * return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


