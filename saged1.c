#include "sm.h"
/**
 * place - function that will return actually path
 * @order : the path that will take
 * Return: the path
 */
char *place(char *order)
{
	char *pth1 = SM_takeenveloped("PATH");
	unsigned int s1, s2;
	struct stat afft;
	char *pathtoken = NULL, *filepath = NULL, *pth1copy = NULL;

	if (!pth1)
		return (NULL);
	pth1copy = SM_strcopy(pth1);
	if (!pth1copy)
		return (NULL);
	pathtoken = _strtok(pth1copy, ':');
	while (pathtoken != NULL)
	{
		s1 = SM_len(order);
		s2 = SM_len(pathtoken);
		filepath = malloc(s1 + s2 + 8);
		if (!filepath)
		{
			free(pth1copy);
			return (NULL);
		}
		SM_string_copy(filepath, pathtoken);
		SM_scat(filepath, "/");
		SM_scat(filepath, order);
		if (stat(filepath, &afft) == 0)
		{
			free(pth1copy);
			return (filepath);
		}
		else
		{
			free(filepath);
			pathtoken = _strtok(NULL, ':');
		}
	}
	free(pth1copy);
	if (stat(order, &afft) == 0)
		return (SM_strcopy(order));
	return (NULL);
}
