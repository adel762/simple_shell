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
