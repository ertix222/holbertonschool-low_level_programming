#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- return number of element in a double linked list
 * @h: pointer to the header of the file
 * Return:  total number of ndoe
 */

size_t dlistint_len(const dlistint_t *h)

{

size_t count = 0;
const dlistint_t *current = h;

if (h == NULL)
return (count);

while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
