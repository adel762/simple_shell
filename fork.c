#include "sm.h"

/**
 * fork - function that handle fork
 * @status: int input
 * @path: the path
 * @args: array of char
 * @err: int input error message
 *
 * Return: int
*/
int fork(int status, char *path,  char **args, int err)
{
	char *i;
	pid_t id = fork();

	if (id == 0)
	{
		execve(path, args, environ);
		i = handle_int(err);
		write(2, "./hsh: ", 7);
		write(2, i, SM_len(in));
		write(2, ": ", 2);
		write(2, path, SM_len(path));
		write(2, ": No such file or directory\n", 28);
		free_grid(args);
		free(i);
		exit(127);
	}
	else
	{
		waitpid(id, &status, 0);
		status = WEXITSTATUS(status);
		f_grid(args);
	}
	return (status);
}
