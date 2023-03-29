#include "function_pointers.h"

/**
 * print_name - name printing
 * @name: a name to print
 * @fun: a pointer function
 */

void print_name(char *name, void (*fun)(char *))
{
	if (name == NULL || fun == NULL)
	{
		return;
	}
	fun(name);
}
