#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw = malloc(sizeof(listint_t));
if (nw == NULL)
return (NULL);
if ((*head) == NULL)
{
(*head) = nw;
nw->n = n;
nw->next = NULL;
}
else
{
nw->next = (*head);
(*head) = nw;
nw->n = n;
}
return (nw);
}
