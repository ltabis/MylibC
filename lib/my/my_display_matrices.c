/*
** EPITECH PROJECT, 2018
** my_display_matrices.c
** File description:
** displaying different types of matrices
*/

#include "my.h"

/* Functions mainly used for debugging */

void display_matrix(void **matrix, int col, int row, char type)
{
	char types[5] = "idfc";
	void (*displayMethod[4])(void **, int, int) = {disp_integer,
				disp_double,
				disp_float,
				disp_char};

	for (unsigned int i = 0; i < 4; i++)
		if (types[i] == type)
			display_method(matrix, col, row);
}

void disp_integer(int **matrix, int col, int row)
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

void disp_double(double **matrix, int col, int row)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++)
			printf("%e ", matrix[i][j]);
		my_putchar('\n');
	}
}

void disp_float(float **matrix, int col, int row)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++)
			printf("%f ", matrix[i][j]);
		my_putchar('\n');
	}
}

void disp_char(char **matrix, int col, int row)
{
	if (!matrix)
		return;
	for (unsigned int i = 0; i < col; i++) {
		if (!matrix[i])
			return;
		for (unsigned int i = 0; j < row; i++) {
			my_putchar(matrix[i][j]);
			my_putchar(' ');
		}
		my_putchar('\n');
	}
}
