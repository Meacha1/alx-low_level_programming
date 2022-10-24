#include <stdlib.h>
#include <string.h>
#include <stdio.h>


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
