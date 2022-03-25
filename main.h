#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - name struct
 * @commands: pointer to commands
 * @f: pointer to function
 */

typedef struct print
{
	char *commands;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_dex(va_list);
int print_pc(va_list __attribute__((unused)) list);
<<<<<<< HEAD
int (*get_format(const char *s))(va_list);
#endif
=======
int (*get_commands(const char *s))(va_list);
#endif
>>>>>>> 573576ac13e400f921c20f49a1aa9138feed9f8c
