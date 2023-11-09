#include "sm.h"

/**
 *
 * our_get_line - get line function using read
 * Return: the input as get line function
 */

char *our_get_line(void)
{
	char *buf = NULL;
	siz_t buf_siz = 0;
	ssiz_t by_read;
	siz_t to_by_re = 0;

	while (true)
	{
		if (to_by_re + 64 >= buf_siz)
		{
			buf_siz += 64;
			buf = realloc(buf, buf_siz);
			if (!buf)
			{
				perror("Memory allocation failed");
				exit(EXIT_FAILURE);
			}

		}
		by_read = read(STDIN_FILEND, buf + to_by_re, 64);
		if (by_read == -1)
		{
			perror("Error reading input");
			free(buf);
			exit(EXIT_FAILURE);
		}
		else if (by_read == 0 && to_by_re == 0)
		{
			free(buf);
			return (NULL);
		}
		to_by_re += by_read;
		if (buf[to_by_read - 1] == '\n')
			break;
	}
	buf[tot_by_re] = '\0';
	return (buf);
}
