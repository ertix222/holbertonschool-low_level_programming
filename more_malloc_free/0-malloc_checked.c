#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 *@b: value and size
 *Return: the h
 */

void *malloc_checked(unsigned int b)


{
void *h = malloc(b);
if (h == NULL)
exit (98);
return (h);
}
