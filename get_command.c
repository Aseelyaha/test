#include "main.h"

ssize_t get_command(char **lineptr, size_t *n, FILE *stream)
{
    ssize_t r;

    r = getline(lineptr, n, stream);
    return (r);
}
