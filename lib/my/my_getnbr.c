/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** create an integer with a char *
*/

#include <stdlib.h>

int my_getnbr(const char *str)
{
    size_t nbr = 0;

    if (!str)
        return (0);
    for (size_t i = str[0] == '-' ? 1 : 0; str[i]; ++i) {
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + (str[i] - 48);
        else
            return (nbr *= str[0] == '-' ? -1 : 1);
    }
    nbr *= str[0] == '-' ? -1 : 1;
    return (nbr);
}
