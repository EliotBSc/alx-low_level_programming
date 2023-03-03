#include "main.h"

/**
 * _strncat - adds pointer for n bytes for scr
 * @dest: pointer input
 * @scr: pointer input
 * @n: number of bytes from scr
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src, int n)
{
int i, j;
i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
