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

extern char **environ;

void penv(char **envp);
char **get_cmd(char **cmd, char *line);
int frk(char **cmd, char **envp);
int ppath(char *av[], char *ev[]);

#endif
