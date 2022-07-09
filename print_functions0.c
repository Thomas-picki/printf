#include "main.h"
/**
 * print_binary - function that print
 * @n: number to be print
 * @printed: hold the no
 */
void print_binary(unsigned int n, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		print_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}
