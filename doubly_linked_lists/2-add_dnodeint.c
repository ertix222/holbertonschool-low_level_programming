#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint- add a new node at the start
*@head: pointer to the head pointer of the list
*@n: value to add at the new node
*Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));/*alloc a new node*/

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;/*initializes the new node*/

if (*head != NULL)
(*head)->prev = new;

*head = new;/*update head of the list*/

return (new);
}
