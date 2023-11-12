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
 * @com : the commant
 *
 * Return: array of string
*/
char **fill(char *com)
{
	int i = 0;
	char *s = NULL;
	char x = ' ';
	char **arr = malloc(sizeof(char *) * 500000);

	s = _strtok(com, x);
	arr[0] = malloc(sizeof(char) * SM_len(s) + 5);
	SM_string_copy(arr[0], s);
	i++;
	while ((s = _strtok(NULL, x)))
	{
		arr[i] = malloc(sizeof(char) * SM_len(s) + 5);
		SM_string_copy(arr[i], s);
		i++;
	}
	arr[i] = NULL;
	free(s);
	return (arr);
}
