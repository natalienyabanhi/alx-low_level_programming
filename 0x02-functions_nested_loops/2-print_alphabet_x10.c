#include "main.h"
/**
 * print_alphabet_x10 - check main
 * Description: _putchar to print alphabet in lowercase 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char m;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
