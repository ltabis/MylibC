/*
** EPITECH PROJECT, 2017
** my_printf_flags_bis.c
** File description:
** other functions for my_printf
*/
#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void d_o(char *str, va_list ap)
{
	unsigned int arg = va_arg(ap, unsigned int);
	unsigned int rest = arg;
	unsigned int size = 0;
	char *disp = NULL;

	for (; arg > 0; arg /= 8, size++);
	disp = malloc(sizeof(char) * (size + 1));
	if (!disp)
		return;
	for (size = 0, arg = rest; arg > 0; arg /= 8, size++) {
		rest = (arg % 8) + 48;
		disp[size] = rest;
	}
	disp[size] = 0;
	my_revstr(disp);
	for (size = 0; disp[size] != '\0'; size++)
		my_putchar(disp[size]);
	free(disp);
}

void d_none(char *str, va_list ap)
{
	my_putchar('%');
}

void d_u(char *str, va_list ap)
{
	unsigned int nb = (va_arg(ap, unsigned int));

	if (nb >= 10)
		my_put_nbr(nb / 10);
	my_putchar(nb % 10 + 48);
}

void d_adr(char *str, va_list ap)
{
	long long int arg = va_arg(ap, long long int);
	long long int rest = arg;
	unsigned int size = 0;
	char *disp = NULL;

	for (; arg > 0; arg = (arg / 16), size++);
	disp = malloc(sizeof(char) * (size + 1));
	if (disp == NULL)
		exit(84);
	for (size = 0, arg = rest; arg > 0; arg = (arg / 16), size++) {
		rest = arg % 16;
		rest += rest >= 10 ? 87 : 48;
		disp[size] = rest;
	}
	disp[size] = 0;
	my_putstr("0x");
	my_putstr(disp);
	free(disp);
}
