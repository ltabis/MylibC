/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** display str on screen
*/

#include <unistd.h>
#include "my.h"

void my_puterr(char const *str)
{
	write(2, str, my_strlen(str));
}
