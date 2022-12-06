#ifndef _MAIN_H_
#define _MAIN_H_

#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

char **get_cmd(char *line);
// void execute_cmd(char **cmd, char **envp);
void frk(char **cmd, char **envp);

#endif
