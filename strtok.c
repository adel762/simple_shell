#include "sm.h"

/**
 * _strtok - function
 * @s : string
 * @delim : char
 * Return: new string
 *
 */
char *_strtok(char *s, char delim)
{
	static char *c;
	char *start = NULL;

	if (s != NULL)
		c = s;
	if (!c || *c == '\0')
		return (NULL);
	while (*c == delim)
		c++;
	start = c;
	while (*c != '\0' && *c != delim)
		c++;
	if (*c == '\0')
		return (start);
	*c = '\0';
	c++;
	return (start);
}

