#ifndef DOG_H
#define DOG_H

/**
* struct dog- strucuture that representing
*@name: name of the doggo
*@age: age of the doggo
*@owner: owner of the doggo
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d,  char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
