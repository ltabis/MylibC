/*
** EPITECH PROJECT, 2017
** unit_test_itoa.c
** File description:
** unit tests for itoa function
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, my_itoa_function_1)
{
	char *test_1 = my_itoa(42);
	char *test_2 = my_itoa(0);
	char *test_3 = my_itoa(-454);
	char *test_4 = my_itoa(321424);
	char *test_5 = my_itoa(-0);
	char *test_6 = my_itoa(24421);
	char *test_7 = my_itoa(303);
	char *test_8 = my_itoa(2314);

	cr_assert_str_eq(test_1, "42");
	cr_assert_str_eq(test_2, "0");
	cr_assert_str_eq(test_3, "-454");
	cr_assert_str_eq(test_4, "321424");
	cr_assert_str_eq(test_5, "0");
	cr_assert_str_eq(test_6, "24421");
	cr_assert_str_eq(test_7, "303");
	cr_assert_str_eq(test_8, "2314");
}
