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

unsigned int get_list_size(list_t *list)
{
    unsigned int elements = 1;

    for (; list && list->next; elements++)
        list = list->next;
    return (!list ? 0 : elements);
}

list_t *get_element(list_t *list, unsigned int idx)
{
    if (!list || get_list_size(list) <= idx)
        return (NULL);
    for (unsigned int i = 0; list->next && i < idx; i++)
        list = list->next;
    return (list);
}
