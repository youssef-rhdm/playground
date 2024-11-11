#ifndef LIBRARY_H
#define LIBRARY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

void putcharr(char c);
void putstr(char str[]);
int strcomp(char str1[], char str2[]);
char *strconcat(char str1[], char str2[]);
int strlenn(char str[]);

#endif
