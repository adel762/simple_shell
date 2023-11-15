#include "sm.h"

/**
 *SM_stoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */
int SM_stoi(char *s)
{
	int i, sign = 1, flag = 0, o;
	unsigned int res = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			res *= 10;
			res += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		o = -1 * res;
	else
		o = res;

	return (o);
}
/**
 * errors - print error
 * @er: int
 * @com: input char the command
 */
void errors(int er, char *com)
{
	char *erro = SM_handle(er);

	write(2, "./hsh: ", 7);
	write(2, erro, SM_len(erro));
	write(2, ": ", 2);
	write(2, com,  SM_len(com));
	write(2, ": not found\n", SM_len(": not found\n"));
	free(com);
	free(erro);
}
