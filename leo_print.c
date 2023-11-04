#include "shell.h"

/**
 * leo_print: printf function
 * message: string
 */

void leo_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
