#include <stdio.h>

/**
 * main- print all arguments
 *@argc: count
 *@argv: vector
 *Return: still maybe but why not
 */

int main(int argc, char *argv[])

{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
