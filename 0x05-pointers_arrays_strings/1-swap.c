#include "main.h"
#include <stdio.h>


/**
 * swap_int - function that swaps the values of two integers.
 * @2: this is the first entry
 * @b: this is the second entry
 *
 *Return: Always 0.
 */

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 43;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return (0);
}
