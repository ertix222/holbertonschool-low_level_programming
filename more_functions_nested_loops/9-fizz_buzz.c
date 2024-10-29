#include <stdio.h>

/**
 *main - write FizzBuzz Fizz or Buzz if 3 5 or 3 & 5
 *description: print number 1 to 100 replacing multiples of 3
 *with Fizz mul of 5 with Buzz and multiples
 *of both 3 and 5 with FizzBuzz
 *Return: Always 0 success
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
