#include "main.h"

/**
 * print_number - print from 0 to 9
 * Return: Always 0
 */
void print_number(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
