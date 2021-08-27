#include <stdio.h>

/**
 *main - prints lower case alphabet in reverse,
 *followed by a new line
 *Return: Always zero (Sucess)
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchr('\n');
return (0);
}
