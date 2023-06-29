#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_character(char c);
int print_string(char *s);
int not_specifier(const char *format, int index);

#endif
