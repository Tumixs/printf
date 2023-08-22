#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED __attribte__((unused))

int _printf(const char *format, ...);
int _strlen(char *s);

#endif
