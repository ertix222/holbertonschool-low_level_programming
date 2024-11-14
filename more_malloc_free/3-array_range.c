#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* array_range- a function that creates an array of integers
*@min: The minimum integer in the array
*@max: The maximum integer in the array
*Return: Pointer to the newly created array
*/

int *array_range(int min, int max)

{

int size, i;
int *array;

if (min > max)
return (NULL);

size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min + i;

return (array);
}
