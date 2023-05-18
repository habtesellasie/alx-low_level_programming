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
    int summ;

    hd = NULL;
    add_dnodeint_end(&hd, 0);
    add_dnodeint_end(&hd, 1);
    add_dnodeint_end(&hd, 2);
    add_dnodeint_end(&hd, 3);
    add_dnodeint_end(&hd, 4);
    add_dnodeint_end(&hd, 98);
    add_dnodeint_end(&hd, 402);
    add_dnodeint_end(&hd, 1024);
    summ = summ_dlistint(hd);
    printf("summ = %d\n", summ);
    free_dlistint(hd);
    hd = NULL;
    return (EXIT_SUCCESS);
}
