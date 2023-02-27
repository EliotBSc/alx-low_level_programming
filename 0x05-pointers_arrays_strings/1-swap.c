#include "main.h"

/**
 * swap_int - A function that swaps int numbers
 * @a: first number to be swaped
 * @b: second number to be swaped
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a =*b;
*b = temp;
}
