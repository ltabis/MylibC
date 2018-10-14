/*
** EPITECH PROJECT, 2017
** my_isum.c
** File description:
** search if a string contain alpha caracters or not (returns -1 false / 0 true)
*/

int my_isalpha(const char *str)
{
	if (!str)
		return (-1);
	for (unsigned int i = 0; str[i] != 0; i++)
		if ((str[i] < 'a' || str[i] > 'z') &&
		(str[i] < 'A' || str[i] > 'Z'))
			return (1);
	return (0);
}
