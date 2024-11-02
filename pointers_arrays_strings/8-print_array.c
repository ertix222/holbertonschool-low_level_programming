#include "main.h"

/**
 *print_array- arrays
 *@a:yes
 *@n:again
 *description: write only a half of a string
 */

void print_array(int *a, int n)


{
  
int i
  
for (i = 0; i < n; i++)
{
if (i ==0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}

_putchar('\n');
}
