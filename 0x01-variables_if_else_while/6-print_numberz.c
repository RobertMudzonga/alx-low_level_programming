#include <stdio.h>

/**
 *main - prints all single digits in base 10 starting from 0,
 *followed by a new line, using putchar
 *Return: Always zero (Sucess)
 */

int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
