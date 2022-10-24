#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw = malloc(sizeof(listint_t));
listint_t *ptr;
if (nw == NULL)
return (NULL);
if (nw->n == NULL)
	return (NULL);
if ((*head) == NULL)
{
(*head) = nw;
nw->n = n;
nw->next = NULL;
}
else
for (ptr = (*head); ptr->next != NULL; ptr = ptr->next)
;
ptr->next = nw;
nw->next = NULL;
nw->n = n;

return (nw);
}
