#include "main.h"

int prompt_display(void)
{
    ssize_t r;
    char *line = NULL;
    size_t len = 0;
   
    char *prompt = "($)";
    
    
   
printf("%s", prompt);
r = get_command(&line, &len, stdin);
if (r == -1) 
{
printf("\n");
exit(EXIT_FAILURE);
}

if (strcmp(line, "exit\n") == 0 )
{
exit(0);
}
split_command(r, &line);
return (0);
}
