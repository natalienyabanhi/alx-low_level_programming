#include "main.h"
/**
 * _islower - Check main
 * @c: input checked
 * Description: it uses putchar to print lowercase 10x
 *
 * Return: Always 0
 */
int _islower(int c)
{
	char j;
	int m = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
			m = 1;
	}

	return (m);
}
