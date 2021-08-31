#include "main.h"

/**
 *main - prints alphabet for lowercase
 *followed by a new line
 *Return: Always 0
 */

void print_alphabet(void)
{
char ch;
ch = 0;

while (ch <= 'z')
{
_putchar(ch);
ch++;
}

_putchar('\n');
}
