#include "main.h"

/**
 *main - print holberton,
 *followed by new line
 *
 *Retun: Always 0 sucess
 */

int main(void)
{
char *c = "Holberton";
int i;
for(i = 0; i < 10; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
