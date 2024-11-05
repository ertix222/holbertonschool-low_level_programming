#include "main.h"


/**
 * print_chessboard- Prints a chessboard
 * @a: 2D array representing a chessboard
 *Return: i like chess
 */

void print_chessboard(char (*a)[8])

{
int m, n;

for (m = 0; m < 8; m++)
{

for (n = 0; n < 8; n++)
{
_putchar(a[m][n]);
}
_putchar('\n');
}
}
