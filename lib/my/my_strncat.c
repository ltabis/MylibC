/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** concatenate two strings limited by n
*/

#include "my.h"

char *my_nconcat(char const *s1, char const *s2, unsigned int n)
{
	unsigned int len_s1 = my_strlen(s1);
	unsigned int len_s2 = my_strlen(s2);
	unsigned int index = 0;
	char *str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (!str || !s1 || !s2)
		return (NULL);
	str[len_s1 + len_s2] = 0;
	for (unsigned int i = 0; s1[i] && index < n; i++, index++)
		str[index] = s1[i];
	for (unsigned int i = 0; s2[i] && index < n; i++, index++)
		str[index] = s2[i];
	str[index] = 0;
	return (str);
}
