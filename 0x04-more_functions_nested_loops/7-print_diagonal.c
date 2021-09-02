#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int v, b;
if (n <= 0)
_putchar('\n');
for (v = 0; v < n; v++)
{
for (b = 0; b < v; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
