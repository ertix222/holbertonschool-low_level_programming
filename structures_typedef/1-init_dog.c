#include <stdio.h>
#include "dog.h"

/**
* init_dog- a fonction that initialize a variable of this type
*@d: value of dog
*@name: owner of the kitty
*@age: owner of the kitty
*@owner: owner of the kitty
*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;

}
