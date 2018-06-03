/*
** EPITECH PROJECT, 2017
** my_strndup.c
** File description:
** duplicate a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(char *src, unsigned int n)
{
	char *str = NULL;
	unsigned int i = 0;

	if (!src)
		return (NULL);
	str = malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	for (; src[i] != 0 && i < n; str[i] = src[i], i++);
	str[i] = 0;
	return (str);
}
