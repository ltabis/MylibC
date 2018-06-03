/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** not very useful fucntion, display a character
*/

#include <unistd.h>

void my_putchar(const int n)
{
	write(1, &n, 1);
}
