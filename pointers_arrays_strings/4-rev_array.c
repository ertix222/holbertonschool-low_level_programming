#include "main.h"

/**
 *reverse_array- reverse an array of intergers
 * @a: array reversed
 * @n: number of element
 *
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
