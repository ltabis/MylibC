/*
** EPITECH PROJECT, 2018
** my_chained_list.c
** File description:
** chained list generator
*/

#include "my.h"

list_t *add_node(list_t *first_element, list_t *new_node)
{
    list_t *tmp = first_element;

    if (!tmp)
        return (new_node);
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new_node;
    return (first_element);
}

list_t *rm_index_node(list_t *first_element, unsigned int index)
{
    list_t *tmp = first_element;
    list_t *tmp2 = NULL;

    if (!first_element || get_list_size(first_element) < index)
        return (first_element);
    if (index == 0)
        return (rm_first_node(first_element));
    for (unsigned int i = 0; first_element->next && i < index; i++)
        first_element = first_element->next;
    if (!first_element->next)
        return (rm_last_node(first_element));
    tmp2 = first_element;
    while (tmp2->next != tmp)
        tmp2 = tmp2->next;
    tmp2->next = tmp->next;
    free(tmp);
    return (first_element);
}

list_t *rm_first_node(list_t *first_element)
{
    list_t *next = NULL;

    if (!first_element)
        return (NULL);
    else if (!first_element->next) {
        free(first_element);
        return (NULL);
    }
    next = first_element->next;
    free(first_element);
    return (next);
}

list_t *rm_last_node(list_t *first_element)
{
    list_t *tmp = first_element;

    if (!tmp || !tmp->next) {
        if (tmp && !tmp->next)
            free(tmp);
        return (NULL);
    }
    while (tmp->next->next)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
    return (first_element);
}

list_t *create_node(void *data, size_t size)
{
    list_t *new_node = malloc(sizeof(list_t));

    if (!new_node)
        return (NULL);
    new_node->data = data;
    new_node->size = size;
    new_node->next = NULL;
    return (new_node);
}
