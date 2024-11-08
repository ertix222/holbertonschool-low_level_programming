#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- addition numbers
 *@argc: count
 *@argv: vector
 *Return: still maybe but why not
 */

int main(int argc, char *argv[])

{
int i, j, produit;

if (argc == 0)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

for (j = 0; argv[i][j] != '\0'; j++)
{

if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
produit += atoi(argv[i]);
}
printf("%d\n", produit);
return (0);
}
