#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int prompt_display(void);
ssize_t get_command(char **lineptr, size_t *n, FILE *stream);
void split_command(ssize_t r, char **ine);
void execute(char **argv);
char *get_path(char *comd);
#endif
