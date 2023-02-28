#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer char
 * Return: message
 */
void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
	_putchar(str[i]);
else
	continue;
}
_putchar('\0');
}
