/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main file function
*/

#include "my.h"
#include "proto.h"
#include <stdio.h>

int main(int ac, char **av, char * const *env)
{
	// ## START TESTING
	float **matrix = generate_float_matrix(10, 10, 1.5f);

	display_matrix((void **)matrix, 5, 5, 'f');
	delete_mundane_matrix((void **)matrix, 10, 10);
// ## END TESTING
	return (0);
}
