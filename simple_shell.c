#include "sm.h"

/**
 * main - main finction
 *
 * Return: 0 success
 */

int main(void)
{
	char **args = NULL, *path = NULL, *com;
	int status = 0;
	int er = 0;
	int a = isatty(STDIN_FILENO);

	while (1)
	{
		er++;
		if (a)
			SM_stringg("$ ");
		com = malloc(5000000);
		if (fgets(com, 5000000, stdin) == NULL)
		{
			free(com);
				break;
		}
		if (com[SM_len(com) - 1] == '\n')
			com[SM_len(com) - 1] = '\0';
		if (SM_len(com) == 0)
		{
			free(com);
			continue;
		}
		args = fill(com);
		if (_check(args, status, com))
		{
			f_grid(args), free(com);
			continue;
		}
		path = location(args[0]);
		if (path == NULL)
		{
			errors(er, com);
			f_grid(args);
			continue;
		}
		free(args[0]), args[0] = path, free(com);
		status = fork(status, path, args, er);
	}
	return (status);
}
