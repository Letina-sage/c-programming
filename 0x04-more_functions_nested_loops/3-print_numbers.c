#include "main.h"

/**
 * print_number - print from 0 to 9
 * Return: Always 0
 */
void print_number(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
		_putchar(i);
	_putchar('\n');
}
