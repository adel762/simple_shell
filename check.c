#include "sm.h"

/**
 * print_information - print the inform
 * @environ: the array
 */
void print_information(char **environ)
{
	int l = 0;

	while (environ[l])
	{
		SM_stringg(environ[l]);
		SM_charr('\n');
		l++;
	}
}

/**
 * _check - check for inform & exit
 * @argum: array of input
 * @stat: sagedryan
 * @commd: the commd
 * Return: 0
*/
int _check(char **argum, int stat, char *commd)
{
	char *str1 = "env";
	char *str2 = "exit";

	if (SM_scm(str1, argum[0]))
	{
		print_information(environ);
		return (1);
	}
	else if (SM_scm(str2, argum[0]))
	{
		f_grid(argum);
		free(commd);
		exit(stat);
	}
	else
	{
		return (0);
	}
}

