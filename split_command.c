#include "main.h"

void split_command(ssize_t r, char **line)
{
    int i;
    int w_num = 0;
    char *word;
    char **argv;
    char *line_cp;const char *delim = " \n";

    /*copy the line string*/
    line_cp = malloc(sizeof(char) * (r + 1));
    strcpy(line_cp, *line);
    /*count the number of words(tokens)in the command*/
    word = strtok(*line, delim);
    while (word != NULL)
    {
        w_num++;
        word = strtok(NULL, delim);
    }
    /*printf(">>>>> %d \n", w_num);*/
    
    /*keep the composed words of the command in array*/
    argv = malloc(sizeof(char *) * w_num);
    word = strtok(line_cp, delim);
    for (i = 0; word != NULL; i++){
            argv[i] = malloc(sizeof(char) * (strlen(word) + 1));
            strcpy(argv[i], word);
            /*printf(">>>>> %s \n", argv[i]);*/
            word = strtok(NULL, delim);
        }
        argv[i] = NULL;

        execute(argv);
}
