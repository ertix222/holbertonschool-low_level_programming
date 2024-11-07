#include "main.h"

/**
 * sqrt_chek- recursion who will check if it's a square root
 *@n: number give in sqrt_recursion
 *@guess: number to find the square ro
 *Return: maybe
 */

int sqrt_chek(int n, int guess)

{
if (guess * guess > n)
return (-1);

if (guess * guess == n)
return (guess);

return (sqrt_chek(n, guess + 1));
}

/**
 * _sqrt_recursion- returns the natural square root of a number
 *@n: number given
 *Return: maybe one more
 */

int _sqrt_recursion(int n)

{
if (n < 0)
return (-1);

if (n == 0)
return (0);

return (sqrt_chek(n, 0));
}
