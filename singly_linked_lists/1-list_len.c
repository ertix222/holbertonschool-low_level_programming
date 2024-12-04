#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
* list_len- return the number of elements in a linked list
*@h: list of nodes
*Return: the number of nodes
*/

size_t list_len(const list_t *h)

{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
return (count);

else
{
count++;
current = current->next;
}
}
return (count);
}
