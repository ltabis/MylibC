/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
	unsigned int count = 0;

	while (s2[count] == s1[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}
