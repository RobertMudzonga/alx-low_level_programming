#include "main.h"

/**
 *main- prints lowercase, followed by new line
 *Return: Always 0 sucess
 */

int main(void)
{
char ch;

ch = 'a';

while(ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
return (0);
}
