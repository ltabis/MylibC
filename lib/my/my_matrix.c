/*
** EPITECH PROJECT, 2018
** my_matrix
** File description:
** functions that generate matrices
*/

#include <stdlib.h>
#include "my.h"

int **generate_integer_matrix(int col, int row, int init)
{
	int **matrix = malloc(sizeof(int *) * col);

	if (!matrix)
		return NULL;
	for (unsigned int i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(int) * row);
		if (!matrix[i])
			return NULL;
		for (unsigned int j = 0; j < row; j++)
			matrix[i][j] = init;
	}
	return matrix;
}

void delete_matrix(void **matrix, int row, int col)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		free(matrix[i]);
	}
	free(matrix);
}
