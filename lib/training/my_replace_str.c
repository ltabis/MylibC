/*
** EPITECH PROJECT, 2017
** my_replace_str.c
** File description:
** Replace a partern in a string by another patern
*/

#include "my.h"

size_t check_patern(char *str, char *pat)
{
    size_t i = 0;

    for (; str[i] && str[i] == pat[i]; i++);
    return (i);
}

char *fill_string(char *prev, char *rep, char *next)
{
    size_t index = 0;
    char *new_str = NULL;
    size_t new_str_length = my_strlen(prev) + my_strlen(next) + my_strlen(rep);

    if (!(new_str = malloc(sizeof(char) * (new_str_length + 1))))
        return (NULL);
    for (size_t i = 0; prev[i]; ++i, ++index)
        new_str[index] = prev[i];
    for (size_t i = 0; rep[i]; ++i, ++index)
        new_str[index] = rep[i];
    for (size_t i = 0; next[i]; ++i, ++index)
        new_str[index] = next[i];
    new_str[index] = 0;
    return (new_str);
}

char *replace_patern(char *str, int index, char *rep)
{
    char *new_str = my_strdup(str);

    if (!new_str)
        return (NULL);
    for (size_t i = 0; i < my_strlen(rep); ++i)
        new_str[i + index] = rep[i];
    return (new_str);
}

char *replace_patern_modif(char *str, int index, char *pat, char *rep)
{
    char *prev = my_strdup(str);
    char *next = my_strdup(&str[index + my_strlen(pat)]);
    char *new_str = NULL;

    if (!prev || !next)
        return (NULL);
    prev[index] = 0;
    if (!(new_str = fill_string(prev, rep, next)))
        return (NULL);
    free(prev);
    free(next);
    return (new_str);
}

char *my_replace_str(char *str, char *pat, char *rep, int iter)
{
    int chng_lenght = my_strlen(pat) == my_strlen(rep) ? 0 :
    my_strlen(pat) > my_strlen(rep) ? my_strlen(pat) - my_strlen(rep) :
    my_strlen(rep) - my_strlen(pat);

    if (my_strlen(pat) == my_strlen(rep) &&
    check_patern(rep, pat) == my_strlen(rep))
        return (NULL);
    for (int i = 0, done = 0, idx = 0; str && str[i] && done != iter; ++i) {
        idx = check_patern(&str[i], pat);
        if (idx == (int)my_strlen(pat) && chng_lenght != 0) {
            str = replace_patern_modif(str, i, pat, rep);
            ++done;
            i += my_strlen(rep) - 1;
        } else if (idx == (int)my_strlen(pat) && chng_lenght == 0) {
            str = replace_patern(str, i, rep);
            ++done;
            i += my_strlen(rep) - 1;
        }
    }
    return (str);
}
