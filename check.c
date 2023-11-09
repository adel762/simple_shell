#include "sm.h"

/**
 * print_information - print the inform
 * @information: the array of the information
 * Return: 0;
*/
void print_information(char **inform)
{
	int l = 0;

	while (inform[i])
	{
		_putstring(inform[i]);
		_putchar('\n');
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

	if (compare_str(str1, argum[0]))
	{
		print_information(inform);
		return (1);
	}
	else if (compare_str(s2, arg[0]))
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
/**
 * compare_str- function compare between two string
 * @str1: first string
 * @str2: second string
 * Return: 1 or 0
 */
int compare_str(char *str1, char *str2)
{
	int p;

	for (p = 0; str1[p] && str2[p]; p++)
		if (s1[p] != str2[p])
			return (0);
	if (str1[p] != '\0' || str2[i] != '\0')
		return (0);
	return (1);
}
