#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s : char pointer passed
 * Return: length of a string
 */
int _strlen(char *s)
{
int len;
while(*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
