#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the num of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
