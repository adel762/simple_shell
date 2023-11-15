#include "sm.h"

/**
 * print_information - print the inform
 * @inform: the array
 *
 * Return: 0;
 */
void print_information(char **inform)
{
	int l = 0;

	while (inform[i])
	{
		SM_stringg(inform[i]);
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
	char *str1 = "inform";
	char *str2 = "exit";

	if (SM_scm(str1, argum[0]))
	{
		print_information(inform);
		return (1);
	}
	else if (SM_scm(s2, arg[0]))
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

