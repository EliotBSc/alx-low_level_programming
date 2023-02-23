#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 *Return: void
 */
void times_table(void)
{
int s = 0, e = 9, count = 0;
while (count <= 9)
{
while (s < e)
{
int multp = count * s;
if (s != 0)
{
_putchar(',');
if (multp < 10)
{
_putchar(' ');
_putchar(' ');
}
else
_putchar(' ');
}
if (multp < 10)
_putchar(multp + '0');
else
{
_putchar(multp / 10 + '0');
_putchar(multp % 10 + '0');
}
if (s == e)
_putchar('\n');
s++;
}
s = 0;
 count++;
}
}

