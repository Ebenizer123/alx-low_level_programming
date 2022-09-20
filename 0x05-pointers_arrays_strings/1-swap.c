#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: takes an int
 * @b: taks an int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
