/*
** EPITECH PROJECT, 2017
** unit_test_revstring.c
** File description:
** unti tests redirection
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, revstr)
{
	char *str1 = NULL;
	char str2[] = "I'm a string";
	char str3[] = "Lucas";
	char str4[] = "";
	char str5[] = "2";

	my_revstr(str1);
	my_revstr(str2);
	my_revstr(str3);
	my_revstr(str4);
	my_revstr(str5);
	cr_assert_eq(str1, NULL);
	cr_assert_str_eq(str2, "gnirts a m'I");
	cr_assert_str_eq(str3, "sacuL");
	cr_assert_str_eq(str4, "");
	cr_assert_str_eq(str5, "2");
}

Test(lib_tests, strrevcmp)
{
	int a = my_strrevcmp(NULL, "");
	int b = my_strrevcmp("yes", "yes");
	int c = my_strrevcmp("no", "yes");
	int d = my_strrevcmp("sefsefsefsefsef", "sefsefsefsefsef");
	int e = my_strrevcmp("ejfoizf,,", "ejfoizefzef");

	cr_assert_eq(a, -1);
	cr_assert_eq(b, 0);
	cr_assert_eq(c, -4);
	cr_assert_eq(d, 0);
	cr_assert_eq(e, -58);
}

Test(lib_tests, strnrevcmp)
{
	int a = my_strnrevcmp(NULL, "", 5);
	int b = my_strnrevcmp("yes", "yes", 4);
	int c = my_strnrevcmp("no", "yes", 2);
	int d = my_strnrevcmp("sefsefsefsefsef", "sefsefsefsefsef", 12);
	int e = my_strnrevcmp("ejfoizzef", "ejfoizefzef", 3);

	cr_assert_eq(a, -1);
	cr_assert_eq(b, 0);
	cr_assert_eq(c, -4);
	cr_assert_eq(d, 0);
	cr_assert_eq(e, 0);
}
