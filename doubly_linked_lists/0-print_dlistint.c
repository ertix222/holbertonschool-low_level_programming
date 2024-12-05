#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- print all element of a list
 * @h: pointer to the header of the file
 * Return:  total number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
size_t count = 0; /*count node*/
const dlistint_t *current = h;

if (h == NULL)
return (0);

while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}
return (count);
}
