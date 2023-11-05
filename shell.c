#include "shell.h"
#include <stdbool.h>

int main(void)
{
	char command[139];

	while (true)
	{
		desplay_prompt();
		read_comand(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
