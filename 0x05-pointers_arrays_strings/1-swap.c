#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: integer to swap
 * @b: integer to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
