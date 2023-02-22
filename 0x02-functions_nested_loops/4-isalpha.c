#include "main.h"

/**
 * _isalpha - checks for alphabetic charecter
 * @c: charecter to be tested
 * Return: 1 if @c is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122 || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
