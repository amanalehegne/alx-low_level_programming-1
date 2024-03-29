#include <stdio.h>
#include "function_pointer.h"

/**
 * print_name - execute a function
 * @name: parameter that function ptr needs
 * @f: function to execute
 */

void print_name(char*name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
