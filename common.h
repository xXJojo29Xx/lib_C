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

void fatal(char *str);
void critik(char *str);

int buflen(char *buf);
int intlen(int nb);
int rstbuf(char *buf);

int print(char *str);
int println(char *str);
int print_i(int *array, int len);

char *itoa(char *dest, int nb);


#include "common.c"
#endif
