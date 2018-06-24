/*
** EPITECH PROJECT, 2018
** my_chained_list_memory.c
** File description:
** this file will handle memory for the chained lists
*/

#include "my.h"

void delete_list(list_t **list)
{
	if (!(*list))
		return;
	for (list_t *next = *list; *list;) {
		next = (*list)->next;
		free(*list);
		*list = next;
	}
	*list = NULL;
}
