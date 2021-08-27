#include <stdio.h>

/**
 *main - prints lower case alphabet
 *followed by a new line
 *Return: Always zero (Sucess)
 */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
