#include <stdlib.h>
#include <stdio.h>

/**
 * main- multiplies two nummbers
 *@argc: count
 *@argv: vector
 *Return: still maybe but why not
 */

int main(int argc, char *argv[])

{
  int i, j, produit;
  
  if (argc < 3)
    {
    printf("Error\n");
  return (1);
}
  i = atoi(argv[1]);
  j = atoi(argv[2]);
  produit = i * j;
  printf("%d\n", produit);
      return (0);
}
