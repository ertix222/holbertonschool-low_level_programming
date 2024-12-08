#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end- add a new node a the end of a list
*@head: pointer to the head pointer of the list
*@n: value to add at the new node
*Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
dlistint_t *new, *current;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));/*alloc a new node*/

if (new == NULL)
return (NULL);

new->n = n;/*initializes the new node*/
new->next = NULL;

if (*head != NULL)/*if list is empty*/
{
new->prev = NULL;
(*head)->prev = new;
return (new);
}

current = *head;/*find the last node throught the list*/
while (current->next != NULL)
{
current = current->next;
}
current->next = new;/*put the new node at the end*/
new->prev = current;

return (new);
}
