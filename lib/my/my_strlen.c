/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** task03 Day04
*/

int my_strlen(char const *str)
{
	unsigned int i = 0;

	for (; str[i]; i++);
	return (i);
}
