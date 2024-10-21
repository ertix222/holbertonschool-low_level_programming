#include <stdio.h>

/*
 * main - Entry main of the program
 * description main for the void said size bits
 * return: Always return 0 (success)
 */

int main(void)
{
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
if (sizeof(void *) == 4)
{
printf("Size of a long int: 4 byte(s)\n");
}
else if (sizeof(void *) == 8)
{
printf("Size of a long int: 8 byte(s)\n");
}
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
return (0);
}
