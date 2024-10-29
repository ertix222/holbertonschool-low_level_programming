#include "main.h"

/**
 *swap_int- swap digit
 *@*a: first one
 *@*b:second one
 *@t
 *description: swap digit of *a and *b
 */


void swap_int(int *a,int *b)
{

int t;

t = *a;
*a = *b;
*b = t;
}
