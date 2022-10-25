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
else
for (; head != NULL;)
{
aux = head;
head = head->next;
free(aux);
}
}
