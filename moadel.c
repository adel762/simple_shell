#include "sm.h"

/**
 * *SM_takeenveloped- it is function that return the track
 * @firstname: TRACK
 * Return: the track
 */
char *SM_takeenveloped(char *firstname)
{
	char **en;
	char *enter = NULL;

	for (en = environ; *en != NULL; en++)
	{
		enter = *en;
		if (SM_strcomp(enter, firstname, SM_len(firstname)) == 0
			       && enter[SM_len(firstname)] == '=')
			return (enter + SM_len(firstname) + 1);
	}
	return (NULL);
}
