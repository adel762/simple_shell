#include "sm.h"

/**
 * _strtok - function that split string
 * @str: char 1
 * @d: char2
 *
 * Return: int
 */
char *_strtok(char *str, const char *d)
{
	char *token;

	if (str)
		token = str;
	if (!token)
		return (NULL);

	size_t ts = strspn(token, d);

	if (token[ts] == '\0')
	{
		token = NULL;
		return (NULL);
	}

	size_t te = strspn(token + ts, d);

	if (token[ts + te] == '\0')
	{
		token = NULL;
		return (token + ts);
	}
	token[ts + te] = '\0';
	token = token + ts + te + 1;
	return (token + ts);
}
