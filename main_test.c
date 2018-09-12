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
	char **matrix = generate_char_matrix(5, 5, 'o');

	display_matrix((void **)matrix, 5, 5, 'c');
	delete_mundane_matrix((void **)matrix, 5, 5);
// ## END TESTING
	return (0);
}
