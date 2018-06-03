/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** determinate the lenght of a string
*/

unsigned int my_strlen(char const *str)
{
	unsigned int i = 0;

	if (!str)
		return (0);
	for (; str[i]; i++);
	return (i);
}
