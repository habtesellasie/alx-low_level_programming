#include <stdio.h>

void __attribute__((constructor)) str(void);

/**
 * str - Prints a string before the main function
 */
void str(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

