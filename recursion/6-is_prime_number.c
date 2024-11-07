#include "main.h"

/**
 * prime_chek- recursion who will check if it's a prime number with modulo
 *@n: number give in is_prime_number
 *@guess: number to find if it's a prime one or not
 *Return: maybe
 */

int prime_chek(int n, int guess)

{
if (guess * guess > n)
return (1);

if (n % guess == 0)
return (0);

return (prime_chek(n, guess + 1));

}

/**
 * is_prime_number- function that returns 1 if it's a prime number
 * otherwise it will return 0.
 *@n: number given
 *Return: 1 if n is prime else 0
 */


int is_prime_number(int n)
{

if (n <= 1)
return (0);

if (n == 2)
return (1);

return (prime_chek(n, 2));

}
