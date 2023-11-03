#include "sm.h"

/**
 * main - simple_shell program
 * @ac: int input 1
 * @av: char input 2
 *
 * Return: int var
*/
int main(int ac, char **av)
{
	char *conn;
	char pro[] = "$ ";

	do {
		conn = malloc(ml * (ac / ac));
		if (isatty(STDIN_FILENO) == 1)
			SM_stringg(pro);
		if (fgets(conn, ml, stdin) == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				SM_stringg("\n");
			free(conn);
			break;
		}
		com[strcspn(conn, "\n")] = '\0';
		_ex(environ, &conn, av);
		free(conn);
	} while (1);
return (0);
}

