/*
** EPITECH PROJECT, 2018
** my_getenv.c
** File description:
** get environnement variable
*/

#include "my.h"

int my_getenv(const char *variable, char * const *env)
{
	for (int index = 0, len = my_strlen(variable);
	env && env[index]; index++)
		if (my_strncmp(env[index], variable, len - 1) == 0)
			return (index);
	return (-1);
}
