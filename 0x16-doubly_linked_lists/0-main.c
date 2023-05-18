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
    dlistint_t *nw;
    dlistint_t hel = {8, NULL, NULL};
    size_t n;

    hd = &hel;
    nw = malloc(sizeof(dlistint_t));
    if (nw == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    nw->n = 9;
    hd->prev = nw;
    nw->next = hd;
    nw->prev = NULL;
    hd = nw;
    n = print_dlistint(hd);
    printf("-> %lu elements\n", n);
    free(nw);
    return (EXIT_SUCCESS);
}
