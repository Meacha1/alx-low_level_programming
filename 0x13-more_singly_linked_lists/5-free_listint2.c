#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
listint_t *aux;

for (; (*head) != NULL;)
{
aux = (*head);
(*head) = (*head)->next;
free(aux);
}
head = NULL;
}

