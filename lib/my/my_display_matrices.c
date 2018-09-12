/*
** EPITECH PROJECT, 2018
** my_display_matrices.c
** File description:
** displaying different types of matrices
*/

#include "my.h"

/* Functions mainly used for debugging */

void display_integer_matrix(int **matrix, int col, int row)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++) {
			my_put_nbr(matrix[i][j]);
			my_putchar(' ');
		}
		my_putchar('\n');
	}
}

void display_float_matrix(float **matrix, int col, int row)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++)
			printf(matrix[i][j]);
	}
}
