#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *@str: char pointer to be printed
 */
void _puts(char *str)
{
while (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
