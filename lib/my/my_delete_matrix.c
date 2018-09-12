/*
** EPITECH PROJECT, 2018
** my_delete_matrix.c
** File description:
** function that delete a given matrix
*/

#include <stdlib.h>

void delete_mundane_matrix(void **matrix, int row, int col)
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

void delete_string_matrix(char ***matrix, int row, int col)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int j = 0; j < row; j++) {
			if (!matrix[i][j])
				return;
			free(matrix[i][j]);
		}
		free(matrix[i]);
	}
	free(matrix);
}
