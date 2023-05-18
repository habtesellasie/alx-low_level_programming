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
    dlistint_t *nd;

    hd = NULL;
    add_dnodeint_end(&hd, 0);
    add_dnodeint_end(&hd, 1);
    add_dnodeint_end(&hd, 2);
    add_dnodeint_end(&hd, 3);
    add_dnodeint_end(&hd, 4);
    add_dnodeint_end(&hd, 98);
    add_dnodeint_end(&hd, 402);
    add_dnodeint_end(&hd, 1024);
    print_dlistint(hd);
    nd = get_dnodeint_at_index(hd, 5);
    printf("%d\n", nd->n);
    free_dlistint(hd);
    hd = NULL;
    return (EXIT_SUCCESS);
}
