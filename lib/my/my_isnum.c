/*
** EPITECH PROJECT, 2017
** my_str_isum.c
** File description:
** search if a string is num or not
*/

int my_isnum(const char *str)
{
	unsigned int i = 0;
	unsigned int nbr = 0;

	i = str[0] == '-' ? 1 : 0;
	for (; str[i] != 0; i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}
