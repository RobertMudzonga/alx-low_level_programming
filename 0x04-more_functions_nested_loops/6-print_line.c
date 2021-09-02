#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
int b;
if (n <= 0)
_putchar('\n');
for (b = 0; b < n; b++)
{
_putchar('_');
}
_putchar('\n');
}
