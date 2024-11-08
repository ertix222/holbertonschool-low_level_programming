#include <stdio.h>

/**
 * main- print the number of arguments passed into it
 *@argc: count
 *@argv: vector
 *Return: still maybe but why not
 */

int main(int argc, char *argv[])

{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
