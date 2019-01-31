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

list_t *add_node(list_t *, list_t *);
list_t *create_node(int);
list_t *rm_first_node(list_t *);
list_t *rm_last_node(list_t *);
list_t *get_element(list_t *, unsigned int);
list_t *rm_index_node(list_t *, unsigned int);
char find_flag(const char *, int);
char *my_nconcat(char const *, char const *, unsigned int);
char *my_replace_str(char *, char *, char *, int);
char *my_concat(char const *, char const *);
char *my_strndup(char *, unsigned  int);
char *my_strdup(char const *);
char *my_revstr(char *);
char *my_itoa(int);
char **my_copy_board(char **);
char **generate_char_matrix(unsigned int, unsigned int, char);
char ***generate_string_matrix(unsigned int, unsigned int, char *);
unsigned int my_strlen(char const *);
unsigned int get_list_size(list_t *);
int my_strnrevcmp(const char *, const char *, unsigned int);
int my_strncmp(char const *, char const *, unsigned int);
int my_strrevcmp(const char *, const char *);
int my_getenv(const char *, char * const *);
int my_strcmp(char const *, char const *);
int my_printf(const char *, ...);
int my_isalpha(const char *);
int my_getnbr(char const *);
int my_isnum(const char *);
int my_isneg(int);
int **generate_integer_matrix(unsigned int, unsigned int, int);
float **generate_float_matrix(unsigned int, unsigned int, float);
double **generate_double_matrix(unsigned int, unsigned int, double);
void delete_mundane_matrix(void **, unsigned int);
void display_matrix(void **, unsigned int, unsigned int, char);
void (*chooseFlag[16])(char *, va_list);
void d_ex_down(const char *, va_list);
void d_ex_up(const char *, va_list);
void d_none(const char *, va_list);
void d_adr(const char *, va_list);
void d_ex(const char *, va_list);
void clean_board_memory(char **);
void d_i(const char *, va_list);
void d_s(const char *, va_list);
void d_c(const char *, va_list);
void d_u(const char *, va_list);
void d_o(const char *, va_list);
void d_b(const char *, va_list);
void my_putstr(char const *);
void my_puterr(char const *);
void my_putchar(const int);
void delete_list(list_t **);
void my_clean_str(char *);
void my_put_nbr(int);

#endif /* !MY_H_ */
