/*
** EPITECH PROJECT, 2018
** my_display_matrices.c
** File description:
** displaying different types of matrices
*/

#include "my.h"

void display_integer_matrix(int **matrix, int col, int row)$
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++)
			my_put_nbr(matrix[i][j]);
	}
}
