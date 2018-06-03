/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** duplicate a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	char *str = NULL;
	unsigned int i = 0;

	if (!src)
		return (NULL);
	str = malloc(sizeof(char) * (my_strlen(src) + 1));
	if (!str)
		return (NULL);
	for (; src[i]; str[i] = src[i], i++);
	str[i] = 0;
	return (str);
}
