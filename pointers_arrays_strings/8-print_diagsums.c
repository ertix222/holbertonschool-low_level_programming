#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- print the sum of the two diagonals
 *@size: the size of the square
 *@a: 2
 *Return: nothing but yes maybe one time
 */

void print_diagsums(int *a, int size)

{
int fSum = 0;
int SSum = 0;
int i;

for (i = 0; i < size; i++)
{
fSum += a[i * size + i];
SSum += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", fSum, SSum);

return;
}
