#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of your argument
  * @ac: number of command line arguments
  * @av: array that contains the program command line arguments
  * Return: pointer to new string
  */

char *argstostr(int ac, char **av)
{
	int len, i, j, a;
	char *str;

	if (ac == 0)
		return (NULL);

	for (len = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = a = 0; a < len; j++, a++)
	{
		if (av[i][j] == '\0')
		{
			str[a] = '\n';
			i++;
			a++;
			j = 0;
		}

		if (a < len - 1)
			str[a] = av[i][j];
	}
	str[a] = '\0';
	return (str);
}
