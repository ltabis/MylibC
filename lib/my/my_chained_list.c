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
	        return (node);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	return (first_element);
}

list_t *rm_index_node(list_t *first_element, int index)
{
	list_t *tmp = first_element;

	if (index < 0)
		return (first_element);
	if (index == 0)
		return (rm_first_node(first_element));
	for (unsigned int i = 0; first_element->next && i < index; i++)
		first_element = first_element->next;
	if (!first_element->next)
		return (rm_last_node(first_element));
	list_t *tmp2 = first_element;
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = tmp->next;
	free(tmp);
	return (first_element);
}

list_t *rm_first_node(list_t *first_element)
{
	if (!first_element)
		return (NULL);
	else if (!first_element->next) {
		free(first_element);
		return (NULL);
	}
	list_t *next = first_element->next;
	free(first_element);
	return (next);
}

list_t *rm_last_node(list_t *first_element)
{
	list_t *tmp = first_element;

	if (!tmp || !tmp->next)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	free(tmp);
	return (first_element);
}

list_t *create_node(int data)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}
