#include "sm.h"

/**
 * SM_takeenveloped- it is function that return the track
 * @firstname: TRACK
 * Return: the track
 */
char SM_takeenveloped(char *firstname)
{
	char **environ;
	char *enter = NULL;

	for (environ = enveloped; *environ != NULL; environ++)
	{
		enter = *environ;
		if (SM_strcomp(enter, firstname, SM_len(firstname)) == 0
			&& enter[SM_len(firstname)] == '=')
			return (enter + SM_len(firstname) + 1);
	}
	return (NULL);
}
