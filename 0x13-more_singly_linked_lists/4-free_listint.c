#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
listint_t *aux;
for (aux = head->next; aux->next != NULL; aux = aux->next)
{
if (aux->next == NULL)
free(NULL);
free(head);
head = aux;

}
}
