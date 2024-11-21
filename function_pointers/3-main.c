#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main- do the calc with the operator that user choose
*@argc: argument count
*@argv: argument vector
*Return: the result of the calcul
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operator)(int, int);

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operator = get_op_func(argv[2]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (operator == NULL)
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = operator(num1, num2);
printf("%d\n", result);
return (0);
}
