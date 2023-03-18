#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters a to f.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
