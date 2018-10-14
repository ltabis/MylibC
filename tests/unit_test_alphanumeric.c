/*
** EPITECH PROJECT, 2017
** unit_test_alphanumeric.c
** File description:
** unti tests redirection
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, isnum)
{
	int a = my_isnum("Not num");
	int b = my_isnum("23234  Not23 num");
	int c = my_isnum("3234235");
	int d = my_isnum("1");
	int e = my_isnum(NULL);

	cr_assert_eq(a, 1);
	cr_assert_eq(b, 1);
	cr_assert_eq(c, 0);
	cr_assert_eq(d, 0);
	cr_assert_eq(e, -1);
}

Test(lib_tests, isalpha)
{
	int a = my_isalpha("not1 alpha");
	int b = my_isalpha("23234  Not23 alpha");
	int c = my_isalpha("alpha");
	int d = my_isalpha("sefsefsef");
	int e = my_isalpha(NULL);

	cr_assert_eq(a, 1);
	cr_assert_eq(b, 1);
	cr_assert_eq(c, 0);
	cr_assert_eq(d, 0);
	cr_assert_eq(e, -1);
}
