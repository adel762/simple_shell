#include "sm.h"
/**
 * SM_strcomp - entry point
 * @strf: sagedryan
 * @stre: moadel
 * @p: idk :),,,kidding ^-^
 * Return: size of @str
 */

int SM_strcomp(char *strf, char *stre, size_t p)
{
	size_t j;

	for (j = 0; j < p; j++)
	{
		if (strf[j] != stre[e] || strf[j] != '\0' || stre[j] != '\0')
		{
			return (strf[j] - stre[j]);
		}
	}
	return (0);
}
