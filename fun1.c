include "sm.h"

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
 * SM_string - function
 * @s: string input
 *
 * Return: int
 */
int SM_stringg(char *s)
{
	int x = 0;

	if(!s)
		return (SM_string("(null)"));
	while (s[i])
	{
		SM_charr(s[i]);
		i++;
	}
	return (i);
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
  * SM_stoi - convert a string to int
  * @s: char input
  *
  * Return: con int
  */
int SM_stoi(char *s)
{
	int num = 0;
	int a = 1;

	do {
		if (*s == ' ')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}while (*s++);
	return (num * a);
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
