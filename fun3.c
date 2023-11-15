#include "sm.h"

/**
 * SM_scm - a function that compares two string
 * @s2: input char 1
 * @s1: input char 2
 *
 * Return: 0 or 1
 */
int SM_scm(char *s1, char *s2)
{
	int i = 0, flag = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			flag = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
		i++;
	}
	return (flag);
}

/**
 * SM_strcopy - func that copy string
 * @str: input char
 *
 * Return: string
 */

char *SM_strcopy(char *str)
{
	unsigned int a = 0;
	char *t = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
		a++;
	t = malloc(a + 1);
	if (t == NULL)
		return (NULL);
	SM_string_copy(t, str);
	return (t);
}

/**
 * SM_scat - function that concat two string
 * @d: input char 1
 * @s: input char 2
 *
 * Return: string
 */
char *SM_scat(char *d, char *s)
{
	int i = 0, b;

	while (d[i] != '\0')
		i++;
	b = 0;
	while (s[b] != '\0')
	{
		d[i] = s[b];
		i++;
		b++;
	}
	d[i] = '\0';
	return (d);
}
