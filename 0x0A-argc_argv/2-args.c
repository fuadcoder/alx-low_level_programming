#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments it receives
 * @argc: the num of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
