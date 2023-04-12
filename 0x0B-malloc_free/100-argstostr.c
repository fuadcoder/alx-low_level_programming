#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	str = malloc((c + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			str[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			str[ia] = av[i][j];
	}
	str[ia] = '\0';

	return (str);
}
