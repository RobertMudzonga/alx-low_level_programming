#include <stdio.h>

/**
 *main - prints alphabet lower case, and then upper case
 *followed by a new line
 *Return: Always zero (Sucess)
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
