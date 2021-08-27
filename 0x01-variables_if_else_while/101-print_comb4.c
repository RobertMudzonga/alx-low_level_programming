#include <stdio.h>

/**
 *main - print all possible different combination of three digits
 *Return: Always 0 sucess
 */

int main(void)
{
int n, m, l;

for (n = 48; n < 58; n++)
{
for (m = 49; n < 58; n++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
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
