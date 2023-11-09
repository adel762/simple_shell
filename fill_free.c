#include "sm.h"

/**
 * f_grid - function
 * @g: char input
 *
 * Return: len
 */
void f_grid(char **g)
{
	int i = 0;

	if (!g)
		return;
	while (g[i])
	{
		free(g[i]);
		i++;
	}
	free(g);
}

/**
 * fill - function
 *
 * @arg: char input
 *
 */
void fill(char ***arg)
{
	int i = 0, z = 0;
	char *s, *k;

	for (i = 0; environ[i] != NULL; i++)
	{
		s = environ[i];
		(*arg)[i] = malloc(sizeof(char) * (SM_len(s) + 1));
		k = (*arg)[i];
		for (z = 0; s[z] != '\0'; z++)
			k[z] = s[z];
		k[z] = '\0';
	}
	(*arg)[i] = NULL;
}
