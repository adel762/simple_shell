#include "sm.h"

/**
 * main - main finction
 * @c: int input
 * @v: char input
 *
 * Return: 0 success
 */

int main(int c, char **v)
{
	char *com;
	int a = isatty(STDIN_FILENO);

	while (1)
	{
		if (a)
			SM_stringg("$ ");
		com = malloc(5000000 * (c / c));
		if (fgets(com, 5000000, stdin) == NULL)
		{
			if (a == 1)
				SM_stringg("\n");
			free(com);
				break;
		}
		com[strcspn(com, "\n")] = '\0';
		_fork(environ, &com, v);
		free(com);
	}
	return (0);
}
