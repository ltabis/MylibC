/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf file for my_printf project
*/
#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

int my_printf(const char *str, ...)
{
	va_list ap;
	char ret = 0;
	void (*chooseFlag[16])(const char *, va_list) =
	{d_i, d_i, d_c, d_s, d_ex_down, d_ex_up,
	d_o, d_none, d_u, d_adr, d_b};

	va_start(ap, str);
	for (unsigned int b = 0; b < my_strlen(str);) {
		if (str[b] == '%') {
			b++;
			(ret = find_flag(str, b)) == -1 ? my_putchar('%') : 0;
			ret != -1 ?
			(*chooseFlag[(int)find_flag(str, b++)])(str, ap) : 0;
		} else if (str[b] != '%')
			my_putchar(str[b++]);
	}
	va_end(ap);
	return (0);
}

char find_flag(const char *str, int b)
{
	char flags_test[] = "idcsxXoS%upb";
	unsigned int i = 0;

	for (; str[b] != flags_test[i] && flags_test[i]; i++);
	if (!flags_test[i])
		return (-1);
	return (i);
}

void d_b(UNUSED const char *str, va_list ap)
{
	unsigned int arg = va_arg(ap, unsigned int);
	unsigned int rest = arg;
	unsigned int size = 0;
	char *disp = NULL;

	for (; arg > 0; arg /= 2, size++);
	disp = malloc(sizeof(char) * (size + 1));
	if (!disp)
		return;
	for (size = 0, arg = rest; arg > 0; arg /= 2, size++) {
		rest = (arg % 2) + 48;
		disp[size] = rest;
	}
	disp[size] = '\0';
	my_revstr(disp);
	my_putstr(disp);
	free(disp);
}
