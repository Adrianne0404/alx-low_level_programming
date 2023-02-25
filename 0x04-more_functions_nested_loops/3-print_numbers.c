#include"main.h"

/**
 * print_numbers - checks for a digit (0 through to 9).
 *
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
