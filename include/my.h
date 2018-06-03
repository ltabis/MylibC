/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** library prototypes
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdlib.h>

int my_isneg(int);
char *my_strdup(char *);
char *my_strndup(char *, int);
void my_put_nbr(int);
void my_putstr(char const *);
void my_putchar(const int);
void my_puterr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
int my_isnum(const char *);
char *my_revstr(char *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
int my_strrevcmp(char const *, char const *, int);
char *my_strcat(char const *, char const *);
char *my_strncat(char const *, char const *, unsigned int);
int my_printf(const char *, ...);
void d_i(char *, va_list);
void d_s(char *, va_list);
void d_c(char *, va_list);
void d_ex(char *, va_list);
void d_ex_up(char *, va_list);
void d_ex_down(char *, va_list);
void d_u(char *, va_list);
void d_o(char *, va_list);
void d_none(char *, va_list);
void d_adr(char *, va_list);
void d_b(char *, va_list);
char find_flag(char *, int);
void (*chooseFlag[16])(char *, va_list);

#endif /* !MY_H_ */
