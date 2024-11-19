#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index- a function that searches for an integer
*@array:pivebudfdijk
*@size:ougabouga
*@cmp:ofnqdsguob
*Return: maybe i or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
