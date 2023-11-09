#include "sm.h"

/**
 * fork - function that handle fort
 * @com: char input1 command
 * @args: char input2 arguments
 * @now: int now
 * @argv: char input3 arg
 * @p: pointer
 *
 * Return: int
 */
int fork(char *com, char **args, char **argv, int now, char *p)
{
	char *s;
	int st;
	pid_t pid = fork();

	argv = argv;
	if (pid == 0)
	{
		fre(argv);
		free(p);
		execve(com, args, environ);
		s = to_st(now);
		write(2, "./hsh: ", 7);
		write(2, s, SM_len(s));
		write(2, ": ", 2);
		write(2, com, SM_len(com));
		write(2, ": No such file or directory\n", 28);
		fre(args);
		free(s);
		exit(127);
	}
	else
	{
		waitpid(pid, &st, 0);
	}
	return (WEXITSTATUS(st));
}
