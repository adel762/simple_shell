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
 * fill - fill arg array with command
 * @argv : the commant
 */
void fill(char ***argv)
{
	int i = 0, j = 0;
	char *s, *x;

	for (i = 0; environ[i] != NULL; i++)
	{
		s = environ[i];
		(*argv)[i] = malloc(sizeof(char) * (SM_len(s) + 1));
		x = (*argv)[i];
		for (j = 0; s[j] != '\0'; j++)
			x[j] = s[j];
		x[j] = '\0';
	}
	(*argv)[i] = NULL;
}
