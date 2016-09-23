#ifndef LIB_COMMON_H_
#define LIB_COMMON_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define bol int
#define true 1
#define false 0

#define ASCII_DECAL_NUM 48

void fatal(char *str); // print error message and quit
void critik(char *str); // print error message and continue

int buflen(char *buf); // (strlen)
int intlen(int nb); // return len of nb. ex: 145 -> return 3
int rstbuf(char *buf); // set all non-zero (at the first '\0') char to '\0'

int print(char *str); // print on stdout *str
int println(char *str); // same print() but add \n at the end
int print_i(int *array, int len); // print int array in 10 columns

char *itoa(char *dest, int nb); // convert nb in string and copy them into *dest

#include "common.c"
#endif
