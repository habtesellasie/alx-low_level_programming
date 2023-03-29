#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 * @st: operator
 * Return: a pointer
 */

int (*get_op_func(char *st))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *st)
		i++;
	return (ops[i].f);
}
