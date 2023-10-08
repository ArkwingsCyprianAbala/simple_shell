#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <errno.h>
#include <limits.h>

#define MYDLM " \t\n"
extern char **environ;

char *grab_mylin(void);
char **token_split(char *my_line);
int run_cmd(char **cmnd, char **argv, int n_index);
char *_getenviron(char *s_varable);
char *_getenv_path(char *mycmd);
char *int_to_asci(int m);
void error_generated(char *label, char *my_cmnd, int n_index);
void str_reverse(char *strin, int leng);
void envir_display(char **cmnd, int *my_stts);
void inner_buildCtrl(char **cmnd, char **argv, int *my_stts, int n_index);
int inner_build(char *cmnd);
void end_term(char **cmnd, char **argv, int *mystts, int n_index);
int num_positive(char *my_str);
int asc_to_int(char *my_str);

void array_free2D(char **arry);
char *stringdup(const char *my_str);
int stringcomp(char *st1, char *st2);
int stringlen(char *sc);
char *stringcat(char *desty, char *srce);
char *stringcpy(char *desty, char *srce);

#endif
