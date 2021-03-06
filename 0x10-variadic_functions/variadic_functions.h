#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct flist - struct to match name with function
 * @name: name
 * @type: function to match
 */

typedef struct flist
{
char *name;
void (*type)(va_list valist);
} formatlist;

void print_c(va_list valist);
void print_i(va_list valist);
void print_fl(va_list valist);
void print_s(va_list valist);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
