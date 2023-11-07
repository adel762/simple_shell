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

int SM_charr(char c);
int SM_stringg(char *s);
int SM_len(char *s);
int SM_stoi(char *s);
void errors(int er, char *command);
int SM_scm(char *s1, char *s2);
char *SM_strcopy(char *str);
char *SM_scat(char *d, char *s);
char *_strtok(char *str, const char *d);
char *SM_string_copy(char *dest, char *src);

#endif
