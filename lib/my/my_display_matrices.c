/*
** EPITECH PROJECT, 2018
** my_display_matrices.c
** File description:
** displaying different types of matrices
*/

#include <stdio.h>
#include "my.h"

/* Functions mainly used for debugging */

void disp_integer(void **origin_matrix, int col, int row)
{
	int **matrix = (int **)origin_matrix;
	
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int j = 0; j < row; j++) {
			my_put_nbr(matrix[i][j]);
			my_putchar(' ');
		}
		my_putchar('\n');
	}
}

void disp_double(void **origin_matrix, int col, int row)
{
	double **matrix = (double **)origin_matrix;

	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int j = 0; j < row; j++)
			printf("%e ", matrix[i][j]);
		printf("\n");
	}
}

void disp_float(void **origin_matrix, int col, int row)
{
	float **matrix = (float **)origin_matrix;

	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int j = 0; j < row; j++)
			printf("%f ", matrix[i][j]);
		printf("\n");
	}
}

void disp_char(void **origin_matrix, int col, int row)
{
	char **matrix = (char **)origin_matrix;

	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int j = 0; j < row; j++) {
			my_putchar(matrix[i][j]);
			my_putchar(' ');
		}
		my_putchar('\n');
	}
}

void display_matrix(void **matrix, int col, int row, char type)
{
	char types[5] = "idfc";
	void (*display_method[4])(void **, int, int) = {disp_integer,
				disp_double,
				disp_float,
				disp_char};

	for (unsigned int i = 0; i < 4; i++)
		if (types[i] == type)
			(*display_method[i])(matrix, col, row);
}
