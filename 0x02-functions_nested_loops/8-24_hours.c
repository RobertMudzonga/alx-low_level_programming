#include "main.h"

/**
 *jack_bauer - print every minute of the day
 *starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
int hrs = 0;
int min = 0;

while (hrs < 24)
{
while (min < 60)
{
_putchar('0' + (hrs / 10));
_putchar('0' + (hrs % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0') + (min % 10));
_putchar('\n');
min++;
}
min = 0;
hrs++;
}
}
