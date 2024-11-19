#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator- a function that executes a function given,
* as a parameter on each element of an array
*@array: array who we give the parameter
*@size: size of the array
*@action: is the pointer to the fonction
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
int i;
for (i = 0; i < size; i++)
action(array[i]);
}
