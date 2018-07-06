/*
** EPITECH PROJECT, 2017
** my_isum.c
** File description:
** search if a string is num or not (returns -1 if not / 0 if num)
*/

int my_isnum(const char *str)
{
	if (!str)
		return (-1);
	for (unsigned int i = 0; str[i] != 0; i++)
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z')))
			return (-1);
	return (0);
}
