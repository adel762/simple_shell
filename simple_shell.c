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
	char *com, **argv;

	argv = malloc(sizeof(char *) * 250);
	fill(&argv);
	while (1)
	{
		com = malloc(1000 * (c / c));
		if (isatty(STDIN_FILENO) == 1)
			SM_stringg("$ ");
		if (fgets(com, 1000, stdin) == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				SM_stringg("\n");
			free(com);
			break;
		}
		/*printf("%s", com);*/
		if (SM_len(com) == 0)
		{
			free(com);
			continue;
		}
		com[strcspn(com, "\n")] = '\0';
		_fork(environ, &com, v);
		free(com);
	}
	return (0);
}
