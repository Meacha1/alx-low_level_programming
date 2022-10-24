#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print the number of elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

for (; h != NULL; h = h->next)
count++;
}
return (count);
}
