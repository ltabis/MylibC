/*
** EPITECH PROJECT, 2018
** my_matrix
** File description:
** functions that generate matrices
*/

#include <stdlib.h>
#include "my.h"

int **generate_integer_matrix(size_t col, size_t row, int init)
{
	int **matrix = malloc(sizeof(int *) * col);

	if (!matrix)
		return NULL;
	for (size_t i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(int) * row);
		if (!matrix[i])
			return NULL;
		for (size_t j = 0; j < row; j++)
			matrix[i][j] = init;
	}
	return matrix;
}

double **generate_double_matrix(size_t col, size_t row, double init)
{
	double **matrix = malloc(sizeof(double *) * col);

	if (!matrix)
		return NULL;
	for (size_t i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(double) * row);
		if (!matrix[i])
			return NULL;
		for (size_t j = 0; j < row; j++)
			matrix[i][j] = init;
	}
	return matrix;
}

float **generate_float_matrix(size_t col, size_t row, float init)
{
	float **matrix = malloc(sizeof(float *) * col);

	if (!matrix)
		return NULL;
	for (size_t i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(float) * row);
		if (!matrix[i])
			return NULL;
		for (size_t j = 0; j < row; j++)
			matrix[i][j] = init;
	}
	return matrix;
}

char **generate_char_matrix(size_t col, size_t row, char init)
{
	char **matrix = malloc(sizeof(char *) * col);

	if (!matrix)
		return NULL;
	for (size_t i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(char) * row);
		if (!matrix[i])
			return NULL;
		for (size_t j = 0; j < row; j++)
			matrix[i][j] = init;
	}
	return matrix;
}

char ***generate_string_matrix(size_t col, size_t row, char *init)
{
	char ***matrix = malloc(sizeof(char **) * col);

	if (!matrix)
		return NULL;
	for (size_t i = 0; i < col; i++) {
		matrix[i] = malloc(sizeof(char *) * row);
		if (!matrix[i])
			return NULL;
		for (size_t j = 0; j < row; j++)
			matrix[i][j] = my_strdup(init);
	}
	return matrix;
}
