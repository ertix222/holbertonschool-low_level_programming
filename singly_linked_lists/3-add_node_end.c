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
list_t *add_node_end(list_t **head, const char *str)

{
list_t *new;
size_t lenght = 0;

if (head == NULL || str == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->next = NULL;
if (*head == NULL)
{*head = new;
return (new);
}
while (str[lenght] != '\0')
{
lenght++;
}
new->len = lenght;
return (new);
}