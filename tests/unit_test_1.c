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
