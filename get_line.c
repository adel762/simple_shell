#include "sm.h"

/**
<<<<<<< HEAD
 * our_get_line - get line func using already read
 * Return: the input as get line func
=======
 * our_get_line - get line function
 *
 * Return: the input as get line function
>>>>>>> f49226869118e4f311cb1125495bafcec51c7fc8
 */

char *our_get_line(void)
{
	char *buf = NULL, size_t bufsize = 0, size_t tobyr = 0;
	ssize_t by_read;
	int vvv = tobyr + 64, noui = tobyr - 1;

	while (1)
	{
		if (vvv >= bufsize)
		{
			bufsize += 64;
			buf = realloc(buf, bufsize);
			if (buf == 0)
				perror("Memory allocation failed"), exit(EXIT_FAILURE);
		}
		by_read = read(STDIN_FILEND, buf + tobyr, 64);
		if (by_read == -1)
		{
			perror("Error reading input"), free(buf), exit(EXIT_FAILURE);
		}
		else if (tobyr == 0 && by_read == 0)
			free(buf), return (NULL);
		tobyr += by_read;
		if (buf[noui] == '\n')
			break;
	}
	buf[tobyr] = '\0';
	return (buf);
}
