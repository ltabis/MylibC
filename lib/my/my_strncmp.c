/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings for n characters
*/

int my_strncmp(char const *s1, char const *s2, unsigned int n)
{
	unsigned int count = 0;
	unsigned int result = 0;

	while (s2[count] == s1[count] && s1[count] != 0 &&
	s2[count] != 0 && count < n)
		count++;
	result = s1[count] - s2[count];
	return (result);
}
