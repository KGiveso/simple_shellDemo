#include "shell.h"
/**
 * _free- free the memory at end
 * @in: input first entry
 */
void _freed(char *in)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(in);
	}
	if (!isatty(STDIN_FILENO))
		free(in);
}
