#include "main.h"
/**
 * _strlen - Finds the length of a string
 * @s:String pointers to the string whose lengthis to be found
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/*increment up to when the last character is NULLL, \0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
