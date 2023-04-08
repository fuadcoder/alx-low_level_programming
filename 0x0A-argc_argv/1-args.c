#include <stdio.h>
#include "main.h"

/**
 * main - prints the num of arguments passed to the program
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
