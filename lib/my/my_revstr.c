/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** task03 Day06
*/

#include "my.h"

char *my_revstr(char *str)
{
	unsigned int i = strlen(str);
	char save = 0;

	for (unsigned int count = 0; count != i / 2; count++) {
		save = str[count];
		str[count] = str[i - count - 1];
		str[i - count - 1] = save;
	}
	return (str);
}
