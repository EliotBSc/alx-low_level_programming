#include "main.h"

/**
 * print_last_digit - Printsthe last digit of a number
 * @n: the number to be tested and returned as the last number
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_dgt = n % 10;
last_dgt = last_dgt < 0 ? -1 * last_dgt : last_dgt;
_putchar(last_dgt + '0');
return (last_dgt);
}
