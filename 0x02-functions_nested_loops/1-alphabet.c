#include "main.h"

/**
 *main- prints lowercase, followed by new line
 *Return: Always 0 sucess
 */

void print_alphabet(void)
{
char ch;

ch = 'a';

while(ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar( '\n' );
}
