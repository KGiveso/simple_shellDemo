#include "shell.h"
/**
 * _file - checks existence of file
 * @pathfile: input path to the file
 * Return: 0 if the file exist or -1 if not
 */
int _file(char *pathfile)
{
	int exist_stat;

	exist_stat = (open(pathfile, ONLY));
	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}
