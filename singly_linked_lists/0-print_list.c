#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
* print_list- 
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)

{
size_t count = 0; /*counter for nodes*/
const list_t *current = h;/*temp pointer to travers the list*/
while(current != NULL)
{
if (current->str == NULL)
{
    printf("[0] (nil)");
}
else{
    printf("[%lu] %s\n", strlen(current->str), current->str);
}
count++;
current = current->next;/*go to the next node*/
}
    return (count); /*number of nods*/
}
