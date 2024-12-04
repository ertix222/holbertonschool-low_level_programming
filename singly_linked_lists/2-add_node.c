#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node- add a new node a the beginning
*@head: pointer of pointer to the head of the list
*@str: string to add to the new node
*Return: adress of the new node
*/
list_t *add_node(list_t **head, const char *str)

{
list_t *new;

if (head == NULL || str == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->next = *head;
*head = new;
return (new);
}
