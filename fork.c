#include "sm.h"

/**
 * _fork - function that handle fork
 * @com: the path
 * @v: array of char
 * @environ: int input error message
 */
void _fork(char **environ, char **com, char **v)
{
	pid_t id = fork();
	char *args[1000];
	int i = 0;
	char *t = strtok(*com, " ");

	if (id == 0)
	{
		while (t != NULL && i < (1000 - 1))
		{
			args[i++] = t;
			t = strtok(NULL, " ");
		}
		args[i] = NULL;
		execve(args[0], args, environ);
		SM_stringg(v[0]);
		SM_stringg(": No such file or directory");
		SM_charr('\n');
		return;
	}
	else if (id < 0)
		return;
	else
	{
		wait(NULL);
	}
}
