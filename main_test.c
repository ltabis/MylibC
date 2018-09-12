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
	int **matrix = generate_integer_matrix(10, 10, 90);

	display_matrix((void **)matrix, 10, 10, 'i');
	delete_mundane_matrix((void **)matrix, 10, 10);
	return (0);
}
