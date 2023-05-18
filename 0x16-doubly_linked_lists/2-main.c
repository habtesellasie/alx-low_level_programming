#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    dlistint_t *hd;

    hd = NULL;
    add_dnodeint(&hd, 0);
    add_dnodeint(&hd, 1);
    add_dnodeint(&hd, 2);
    add_dnodeint(&hd, 3);
    add_dnodeint(&hd, 4);
    add_dnodeint(&hd, 98);
    add_dnodeint(&hd, 402);
    add_dnodeint(&hd, 1024);
    print_dlistint(hd);
    return (EXIT_SUCCESS);
}
