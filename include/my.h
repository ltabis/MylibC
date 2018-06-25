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

#define UNUSED __attribute__ ((unused))

typedef struct list_s {
	int data;
	struct list_s *next;
} list_t;

int my_isneg(int);
char *my_strndup(char *, unsigned  int);
void my_put_nbr(int);
void my_putstr(char const *);
void my_putchar(const int);
void my_puterr(char const *);
unsigned int my_strlen(char const *);
int my_getnbr(char const *);
int my_isnum(const char *);
char *my_revstr(char *);
int my_strcmp(char const *, char const *);
char *my_strdup(char const *);
int my_strncmp(char const *, char const *, unsigned int);
int my_strrevcmp(const char *, const char *);
int my_strnrevcmp(const char *, const char *, unsigned int);
char *my_concat(char const *, char const *);
char *my_nconcat(char const *, char const *, unsigned int);
int my_printf(const char *, ...);
void d_i(const char *, va_list);
void d_s(const char *, va_list);
void d_c(const char *, va_list);
void d_ex(const char *, va_list);
void d_ex_up(const char *, va_list);
void d_ex_down(const char *, va_list);
void d_u(const char *, va_list);
void d_o(const char *, va_list);
void d_none(const char *, va_list);
void d_adr(const char *, va_list);
void d_b(const char *, va_list);
void (*chooseFlag[16])(char *, va_list);
char find_flag(const char *, int);
list_t *add_node(list_t *, list_t *);
list_t *create_node(int);
list_t *rm_first_node(list_t *);
list_t *rm_last_node(list_t *);
list_t *rm_index_node(list_t *, unsigned int);
void delete_list(list_t **);
unsigned int get_list_size(list_t *);

#endif /* !MY_H_ */
