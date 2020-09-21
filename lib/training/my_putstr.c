/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** task02 Day04
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
