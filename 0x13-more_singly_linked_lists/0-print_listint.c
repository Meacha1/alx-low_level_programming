#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
count++;
}
return (count);
}
