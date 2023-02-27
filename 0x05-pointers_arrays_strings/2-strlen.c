#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s : char pointer passed
 * Return: length of a string
 */
int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
len += 1;
s++;
}
return (len);
}
