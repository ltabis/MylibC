/*
** EPITECH PROJECT, 2017
** unit_test_myprintf.c
** File description:
** unti tests redirection
*/

#include "proto.h"
#include "test.h"
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(lib_tests, concat)
{
	char *concat = my_concat("I am a", " test!");
	char *concat2 = my_concat(NULL, "test");
	char *concat3 = my_concat("test", NULL);
	char *concat4 = my_concat(NULL, NULL);
	char *concat5 = my_concat("test", "\1");

	cr_assert_str_eq(concat, "I am a test!");
	cr_assert_eq(concat2, NULL);
	cr_assert_eq(concat3, NULL);
	cr_assert_eq(concat4, NULL);
	cr_assert_str_eq(concat5, "test\1");
	free(concat);
	free(concat5);
}

Test(lib_tests, my_strlen_tests)
{
	char *str_1 = "i'm a test";
	char str_2[] = "testing";
	char str_3[7] = "is not";
	char *str_4 = "very fun lmao";
	char *str_5 = NULL;
	unsigned int res_1 = my_strlen(str_1);
	unsigned int res_2 = my_strlen(str_2);
	unsigned int res_3 = my_strlen(str_3);
	unsigned int res_4 = my_strlen(str_4);
	unsigned int res_5 = my_strlen(str_5);

	cr_assert_eq(res_1, 10);
	cr_assert_eq(res_2, 7);
	cr_assert_eq(res_3, 6);
	cr_assert_eq(res_4, 13);
	cr_assert_eq(res_5, 0);
}
