#include "main.h"

void execute(char **argv) 
{
    char *cmd, *path_comd;
    pid_t child_pid;
  

    child_pid = fork();
    if (child_pid == -1) 
    {
        perror("fork");
        exit(EXIT_FAILURE);
    } 
    else if (child_pid == 0) 
    {
        cmd = argv[0];
        path_comd = get_path(cmd);

         if (path_comd == NULL)
         {
            fprintf(stderr, "%s: ", cmd);
            fprintf(stderr, "No such file or directory\n");
            exit(EXIT_FAILURE);
         }
        if (execve(path_comd, argv, NULL) == -1)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
    } 
    else
    {
        
        wait(NULL);

    }
}
