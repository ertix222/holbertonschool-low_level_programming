#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @nmemb: Number of elements.
 * @size: Size in bytes of each element.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int total_size;
unsigned int i = 0;
char *temp;
void *memory;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;

memory = malloc(total_size);
if (memory == NULL)
{
return (NULL);
}

temp = (char *)memory;
for (i = 0; i < total_size; i++)
{
temp[i] = 0;
}
return (memory);
}
