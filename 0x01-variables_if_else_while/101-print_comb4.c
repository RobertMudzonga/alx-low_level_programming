#include <stdio.h>

/**
 *main - print all possible different combination of three digits
 *Return: Always 0 sucess
 */

int main(void)
{
int n, m, 1;

for (n = 48; n < 58; n++)
{
for (m = 49; n < 58; n++)
{
for (1 = 50; 1 < 58; 1++)
{
if (1 > m && m > n)
{
putchar(n);
putchar(m);
putchar(1);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');
return (0);
}
