#include "main.h"
#include <unistd.h>

/**
 * _putchar - charecter c to stdout
 * @c: the char to print
 * Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
