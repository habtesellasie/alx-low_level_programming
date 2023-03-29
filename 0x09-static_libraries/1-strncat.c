#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncat(char *destination, char *source, int num)
{
	return strncat(destination, source, num);
}
