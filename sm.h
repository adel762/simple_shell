#ifndef SM_H
#define SM_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>
extern char **environ;
extern char **inform;

int SM_charr(char c);
int SM_stringg(char *s);
int SM_len(char *s);
int SM_stoi(char *s);
int SM_scm(char *s1, char *s2);
char *place(char *order);
char *SM_strdup(char *str);
char *SM_strcopy(char *str);
char *SM_scat(char *d, char *s);
char *_strtok(char *str, const char *d);
char *SM_string_copy(char *dest, char *src);
char *our_get_line(void);
void f_grid(char **g);
void errors(int er, char *com);
char **fill(char *com);
void print_information(char **inform);
int _check(char **argum, int stat, char *commd);
int fork(int status, char *path, char  **args, int err);

#endif
