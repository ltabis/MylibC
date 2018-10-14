/*
** EPITECH PROJECT, 2017
** my_isum.c
** File description:
** search if a string is num or not (returns -1 if not / 0 if num)
*/

int my_isnum(const char *str)
{
	unsigned int i = 0;

	if (!str)
		return (-1);
	i = str[0] == '-' ? 1 : 0;
	for (; str[i] != 0; i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}
