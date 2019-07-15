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
#include <string.h>

#define UNUSED __attribute__ ((unused))

typedef struct list_s {
    void *data;
    size_t size;
    struct list_s *next;
} list_t;

list_t *add_node(list_t *, list_t *);
list_t *create_node(void *, size_t);
list_t *rm_first_node(list_t *);
list_t *rm_last_node(list_t *);
list_t *get_element(list_t *, size_t);
list_t *rm_index_node(list_t *, size_t);
char find_flag(const char *, int);
char *my_nconcat(char const *, char const *, size_t);
char *my_replace_str(char *, char *, char *, int);
char *my_concatc(char const *, char const *);
char *my_concat(char const *, char const *);
char *my_strndup(const char *, size_t);
char *my_strdup(char const *);
char *my_revstr(char *);
char *my_itoa(int);
char **my_str_split(const char *);
char **my_copy_board(const char **);
char **generate_char_matrix(size_t, size_t, char);
char ***generate_string_matrix(size_t, size_t, char *);
size_t count_words(const char *str);
size_t my_strlen(char const *);
size_t get_list_size(list_t *);
int my_strnrevcmp(const char *, const char *, size_t);
int my_strncmp(char const *, char const *, size_t);
int my_strrevcmp(const char *, const char *);
int my_getenv(const char *, char * const *);
int my_strcmp(char const *, char const *);
int my_printf(const char *, ...);
int my_isalpha(const char *);
int my_getnbr(char const *);
int my_isnum(const char *);
int my_isempty(char c);
int my_isneg(int);
int **generate_integer_matrix(size_t, size_t, int);
float **generate_float_matrix(size_t, size_t, float);
double **generate_double_matrix(size_t, size_t, double);
void delete_mundane_matrix(void **, size_t);
void display_matrix(void **, size_t, size_t, char);
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
