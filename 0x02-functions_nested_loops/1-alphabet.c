#include "main.h"

/**
 * print_alphabet - displays lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
int start = 97,
    end = 122;
while(start <= end)
{_putchar(start);
start++;
}
_putchar('\n');
}
