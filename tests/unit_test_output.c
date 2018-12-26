/*
** EPITECH PROJECT, 2018
** unit_test_output.c
** File description:
** tests on output functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_test, my_putchar, .init = redirect_all_std)
{
	my_putchar('a');
	my_putchar('b');
	my_putchar('0');
	my_putchar(72);
	my_putchar('e');
	my_putchar('T');
	cr_assert_stdout_eq_str("ab0HeT");
}

Test(lib_test, my_putstr, .init = redirect_all_std)
{
	my_putstr("I'm");
	my_putstr(" a ");
	my_putstr("test and");
	my_putstr(" I'm");
	my_putstr(" proud of it!");
	my_putstr("that's ");
	my_putstr("all");
	cr_assert_stdout_eq_str("I'm a test and I'm proud of it!that's all");
}

Test(lib_test, my_puterr, .init = redirect_all_std)
{
	my_puterr("Same thing as above");
	my_puterr(" but ");
	my_puterr("on the error output!");
	cr_assert_stderr_eq_str("Same thing as above but on the error output!");
}

Test(lib_test, my_putnbr, .init = redirect_all_std)
{
	my_put_nbr(40);
	my_put_nbr(0);
	my_put_nbr(13);
	my_put_nbr(2442525);
	my_put_nbr(-906);
	my_put_nbr(-0);
	cr_assert_stdout_eq_str("400132442525-9060");
}

Test(lib_test, my_printf, .init = redirect_all_std)
{
	my_printf("This file contains %i tests, ", 5);
	my_printf("all %i %s functions are %s.", 5, "output", "here");
	cr_assert_stdout_eq_str(
	"This file contains 5 tests, all 5 output functions are here.");
}
