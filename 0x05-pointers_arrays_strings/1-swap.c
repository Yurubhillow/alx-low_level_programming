#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: First integer value
 * @b: Second integer value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
