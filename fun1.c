#include "sm.h"

/**
 * SM_charr - function
 * @c: char input
 *
 * Return: int
 */
int SM_charr(char c)
{
	return (write(1, &c, 1));
}
/**
 * SM_stringg - function
 * @s: string input
 *
 * Return: int
 */
int SM_stringg(char *s)
{
	int x = 0;

	if (!s)
		return (SM_stringg("(null)"));
	while (s[x])
	{
		SM_charr(s[x]);
		x++;
	}
	return (x);
}

/**
 * SM_len - function return length
 * @s: char input
 *
 * Return: int len
 */
int SM_len(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * SM_string_copy - function copy the string
 * @src: char1
 * @dest: char2
 *
 * Return: dest
 */
char *SM_string_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
