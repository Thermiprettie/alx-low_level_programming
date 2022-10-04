#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer
 * @ac: char
 * Return: concatenated output
 */

char *argstostr(int ac, char **av)
{
	char *sta8;
	int amp, byo, id, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (amp = 0; amp < ac; amp++)
	{
		for (byo = 0; av[amp][byo]; byo++)
			size++;
	}

	sta8 = malloc(sizeof(char) * size + 1);

	if (sta8 == NULL)
	{
		return (NULL);
	}

	id = 0;

	for (amp = 0; amp < ac; amp++)
	{
		for (byo = 0; av[amp][byo]; byo++)
			sta8[id++] = av[amp][byo];

		sta8[id] = '\n';
	}

	sta8[size] = '\0';

	return (sta8);
}
