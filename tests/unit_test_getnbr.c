/*
** TABIS PROJECT, 2018
** unit_test_getnbr.c
** File description:
** getnbr function test
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, my_getbr)
{
	int test1 = my_getnbr(NULL);
	int test2 = my_getnbr("0");
	int test3 = my_getnbr("12344532");
	int test4 = my_getnbr("-132");
	int test5 = my_getnbr("23");

	cr_assert_eq(test1, 0);
	cr_assert_eq(test2, 0);
	cr_assert_eq(test3, 12344532);
	cr_assert_eq(test4, -132);
	cr_assert_eq(test5, 23);
}
