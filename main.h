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


typedef struct list_s
{
 char *str;
 struct list_s *next;
 }list_t;


int main(void);
int _strlen(char *);
int _strcmp(char *s1, char *s2);
int *str_concat(char *s1, char *s2);
int *_strdup(char *str);
void penv(char **envp);
char **get_cmd(char **cmd, char *line);
void frk(char **cmd, char **envp);


#endif
