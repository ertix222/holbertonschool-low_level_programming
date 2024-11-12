#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- return a pointer to a newly allocated space
 *@str: the string that will be copied
 *Return: maybe
 */

char *_strdup(char *str)

{
char *array;
unsigned int i;
unsigned int size = 0;

if (str == NULL)
{
return (NULL);
}

while (str[size] != '\0')
{
size++;
}
array = (char *)malloc((size + 1) * sizeof(char));

if (array == NULL)
{
return (NULL);
}
for (i = 0; i != size; i++)
{
array[i] = str[i];
}
return (array);
}
