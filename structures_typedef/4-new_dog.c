#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen- Calcul a chain of caractere
 * @str: the chain to calcul
 * Return: the lengght of the string
 */

int _strlen(char *str)
{
int length = 0;
if (str == NULL)
return (0);
while (str[length] != '\0')
{
length++;
}
return (length);
}

/**
*new_dog - create a new dog
* @name: name of the kitty
* @age: age of the kitty
* @owner: owner of the kitty
* Return: return a pointerto the new struct dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *kitty;
char *name_copy;
char *owner_copy;
int name_len, owner_len, i;
kitty = malloc(sizeof(dog_t));
if (kitty == NULL)
{
return (NULL);
}
name_len = _strlen(name);
if (name != NULL)
{
name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(kitty);
return (NULL);
}
for (i = 0; i < name_len; i++)
{
name_copy[i] = name[i];
}
name_copy[name_len] = '\0';
}
else
{
name_copy = NULL;
}
owner_len = _strlen(owner);
if (owner != NULL)
{
owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(kitty);
return (NULL);
}
for (i = 0; i < owner_len; i++)
{
owner_copy[i] = owner[i];
}
owner_copy[owner_len] = '\0';
}
else
{
owner_copy = NULL;
}
kitty->name = name_copy;
kitty->age = age;
kitty->owner = owner_copy;
return (kitty);
}
