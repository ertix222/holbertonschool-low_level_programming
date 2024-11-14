#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @nmemb: Number of elements.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int total_size;
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
memset(memory, 0, total_size);
return (memory);
}
