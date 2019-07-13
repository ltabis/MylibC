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

size_t get_list_size(list_t *list)
{
    size_t elements = 1;

    for (; list && list->next; elements++)
        list = list->next;
    return (!list ? 0 : elements);
}

list_t *get_element(list_t *list, size_t idx)
{
    if (!list || get_list_size(list) <= idx)
        return (NULL);
    for (size_t i = 0; list->next && i < idx; i++)
        list = list->next;
    return (list);
}
