#include "main.h"
/**
 * *_strlen_recursion - Returns length of the string
 * @s: input
 * Return: Length of the string
 */

int _strlen_recursion(char *s);
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
