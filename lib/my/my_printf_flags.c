/*
** EPITECH PROJECT, 2017
** my_printf_flags.c
** File description:
** operators for my_printf function
*/
#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void d_i(UNUSED const char *str, va_list ap)
{
	int nbr = va_arg(ap, int);
	unsigned int verif = nbr;

	if (verif == 2147483648)
		my_putstr("-2147483648");
	else if (verif != 2147483648)
		my_put_nbr(nbr);
}

void d_c(UNUSED const char *str, va_list ap)
{
	char ch = (char)va_arg(ap, int);

	my_putchar(ch);
}

void d_s(UNUSED const char *str, va_list ap)
{
	my_putstr(va_arg(ap, char *));
}

void d_ex_down(UNUSED const char *str, va_list ap)
{
	unsigned int arg = va_arg(ap, unsigned int);
	unsigned int rest = arg;
	unsigned int size = 0;
	char *disp = NULL;

	for (; arg > 0; arg = (arg / 16), size++);
	disp = malloc(sizeof(char) * (size + 1));
	if (!disp)
		return;
	for (size = 0, arg = rest; arg > 0; arg = (arg / 16), size++) {
		rest = arg % 16;
		rest += rest >= 10 ? 87 : 48;
		disp[size] = rest;
	}
	disp[size] = 0;
	my_putstr(disp);
	free(disp);
}

void d_ex_up(UNUSED const char *str, va_list ap)
{
	unsigned int arg = va_arg(ap, unsigned int);
	unsigned int rest = arg;
	unsigned int size = 0;
	char *disp = NULL;

	for (; arg > 0; arg = (arg / 16), size++);
	disp = malloc(sizeof(char) * (size + 1));
	if (!disp)
		return;
	for (size = 0, arg = rest; arg > 0; arg = (arg / 16), size++) {
		rest = arg % 16;
		rest += rest >= 10 ? 55 : 48;
		disp[size] = rest;
	}
	disp[size] = 0;
	my_putstr(disp);
	free(disp);
}
