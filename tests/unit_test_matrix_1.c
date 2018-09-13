/*
** EPITECH PROJECT, 2017
** unit_test_matrix_1.c
** File description:
** unit tests for matrices
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, matrix_generation_integer)
{
	int **matrix = generate_integer_matrix(5, 5, 10);

	for (unsigned int i = 0; i < 5; i++)
		for (unsigned int j = 0; j < 5; j++)
			cr_assert_eq(matrix[i][j], 10);
	display_matrix((void **)matrix, 5, 5, 'i');
	delete_mundane_matrix((void **)matrix, 5);
	display_matrix(NULL, 5, 5, 'i');
}

Test(lib_tests, matrix_generation_double)
{
	double **matrix = generate_double_matrix(10, 10, 92.3);

	for (unsigned int i = 0; i < 10; i++)
		for (unsigned int j = 0; j < 10; j++)
			cr_assert_eq(matrix[i][j], 92.3);
	delete_mundane_matrix((void **)matrix, 10);
	display_matrix(NULL, 5, 90, 'f');
}

Test(lib_tests, matrix_generation_float)
{
	float **matrix = generate_float_matrix(7, 7, 9.452f);

	for (unsigned int i = 0; i < 7; i++)
		for (unsigned int j = 0; j < 7; j++)
			cr_assert_eq(matrix[i][j], 9.452f);
	delete_mundane_matrix((void **)matrix, 7);
	display_matrix(NULL, 1, 3, 'd');
}

Test(lib_tests, matrix_generation_char)
{
	int **matrix = generate_integer_matrix(50, 100, 'o');

	for (unsigned int i = 0; i < 50; i++)
		for (unsigned int j = 0; j < 100; j++)
			cr_assert_eq(matrix[i][j], 'o');
	delete_mundane_matrix((void **)matrix, 50);
	display_matrix(NULL, 1000, 10, 'c');
}

Test(lib_tests, matrix_deletion_null)
{
	int **matrix = NULL;

	delete_mundane_matrix((void **)matrix, 50);
}
