#include <stdio.h>
/**
 * main - print lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char rs;

	for (rs = 'a'; rs <= 'z'; rs++)
	{
		if (rs != 'e' && rs != 'q')
			putchar(rs);
	}
	putchar('\n');
	return (0);
}
