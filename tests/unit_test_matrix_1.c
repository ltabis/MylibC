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
	delete_mundane_matrix((void **)matrix, 5, 5);
	cr_assert_eq(matrix, NULL);
}
