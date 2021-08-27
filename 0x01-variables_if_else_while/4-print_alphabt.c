#include <stdio.h>

/**
 *main - prints alphabet except q and e
 *followed by a new line
 *Return: Always zero (Sucess)
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
