#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
listint_t *aux;
if (head->next == NULL)
	free(head);
for (aux = head->next; aux != NULL; aux = aux->next)
{
if (aux->next == NULL)
{
free(head);
free(aux);
}
else
{
free(head);
head = aux;
}
}
}
