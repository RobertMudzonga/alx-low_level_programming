#include <stdio.h>

/**
 *main - print all numbers of base 16 lower case'
 *followed by a new line
 *Return: Always zero
 */

int main(void)
{
int n;
char ch;


for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch < 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
retunrn (0);
}
