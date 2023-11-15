#include "sm.h"

/**
 * miss - return error massege
 * @string: string that will error
 * @g: number of error
 * Return: string that will repeated
*/
char *miss(char *string, int g)
{
	return (SM_scat(string, SM_handle(g)));
}

/**
 * SM_handle - function will convert integer to string
 * @l: the integer number
 * Return: the number in string
 */
char *SM_handle(int l)
{
	char u[19];
	char  *fresh;
	int i = 0, d = 0;

	while (l)
	{
		u[i] = l % 10 + '0';
		i++;
		l /= 10;
	}
	fresh = malloc(i + 5);
	i--;
	while (i >= 0)
	{
		fresh[d] = u[i];
		d++;
		i--;
	}
	fresh[d] = '\0';
	return (fresh);
}
