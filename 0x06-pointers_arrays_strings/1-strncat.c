#include "main.h"

/**
 * _strncat - adds two strings
 * @dest: pointer input value
 * @src: pointer input value
 * @n: input value
 *
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{

int i, j;

i = 0;

while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = scr[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
