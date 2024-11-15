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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
