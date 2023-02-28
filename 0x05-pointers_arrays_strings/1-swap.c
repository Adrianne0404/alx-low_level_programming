#include "main.h"
#include <stdio.h>


/**
 * swap_int - function that swaps the values of two integers.
 * @2: this is the first entry
 * @b: this is the second entry
 *
 *Return: Always 0.
 */
void swap_inty(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
