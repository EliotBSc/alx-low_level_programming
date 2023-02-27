#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: pointer to n to be updated
 */
void reset_to_98(int *n)
{
int x = 1;
int *n = &x;
*n = 98;
}
