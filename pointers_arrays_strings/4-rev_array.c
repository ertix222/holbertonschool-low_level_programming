#include "main.h"

/**
 *_strcat- concatenates two string in one
 * @dest: a pointer to the destination which must be sufficiently large
 * @src: pointer to source string
 *Return: a pointer to the destination string after the
 * concatenation.
 */

void reverse_array(int *a, int n)

{

int i = 0;
int j = n - 1;
int temp;

while (i < j)
{

temp = a[i];
a[i] = a[j];
a[j] = temp;

i++;
j--;
}
}
