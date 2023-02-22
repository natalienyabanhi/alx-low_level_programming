#include "main.h"
/**
 * print_last_digit - chack main
 * @r: inpu an integer
 * Description: This prints the last digit of a number
 *
 * Return: prints the last digit of number
 *
 */
int print_last_digit(int r)
{
	int k;

	if (r < 0)
		k = -1 * (r % 10);
	else
		k = r % 10;
	_putchar((k % 10) + '0');
	return (k % 10);
}
