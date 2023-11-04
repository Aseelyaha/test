#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void desplay_prompt(void);
void leo_print(const char *message);
void read_comand(char *command, size_t size);
void execute_command(const char *command);

#endif
