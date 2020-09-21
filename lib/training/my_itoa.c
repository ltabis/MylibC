/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** convert a integer to a string
*/

#include "my.h"

char *my_itoa(int nbr)
{
    size_t i = 1;
    char *str = NULL;
    char sign = nbr >= 0 ? 0 : 1;

    nbr *= sign == 1 ? -1 : 1;
    for (int tmp = nbr; tmp >= 10; tmp /= 10, ++i);
    if (!(str = malloc(sizeof(char) * (i + sign + 1))))
        return (NULL);
    str[0] = (nbr % 10) + 48;
    for (i = 1; nbr >= 10; ++i) {
        nbr /= 10;
        str[i] = (nbr % 10) + 48;
    }
    if (sign == 1)
        str[i++] = '-';
    str[i] = 0;
    my_revstr(str);
    return (str);
}
