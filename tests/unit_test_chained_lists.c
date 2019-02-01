/*
** EPITECH PROJECT, 2017
** unit_test_chained_lists.c
** File description:
** unti tests redirection
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, chained_list_generator_1)
{
    list_t *list = create_node((void *)5, sizeof(int));

    list = rm_first_node(list);
    list = rm_index_node(list, 5);
    list = create_node((void *)3, sizeof(int));
    list = add_node(list, create_node((void *)4, sizeof(int)));
    list = add_node(list, create_node((void *)24, sizeof(int)));
    list = rm_last_node(list);
    cr_assert_eq((char *)list->data, 3);
    cr_assert_eq((char *)list->next->data, 4);
    delete_list(&list);
    cr_assert_eq(list, NULL);
}

Test(lib_tests, chained_list_generator_2)
{
    list_t *list = create_node((void *)190, sizeof(int));

    for (unsigned int i = 0; i < 50; i++)
        list = add_node(list, create_node((void *)i, sizeof(int)));
    list = rm_last_node(list);
    cr_assert_eq((char *)list->data, 190);
    cr_assert_eq((char *)list->next->data, 0);
    while (list->next)
        list = list->next;
    cr_assert_eq((char *)list->data, 48);
    delete_list(&list);
    cr_assert_eq(list, NULL);
}

Test(lib_tests, chained_list_generator_3)
{
    list_t *list = NULL;

    list = rm_last_node(list);
    list = rm_first_node(list);
    list = rm_index_node(list, 422);
    cr_assert_eq(list, NULL);
    delete_list(&list);
    cr_assert_eq(list, NULL);
}

Test(lib_tests, chained_list_generator_4)
{
    list_t *list = NULL;
    list_t *tmp = NULL;

    for (unsigned int i = 0; i < 50; i++)
        list = add_node(list, create_node((void *)i, sizeof(int)));
    tmp = list;
    for (unsigned int i = 0; tmp->next; i++) {
        cr_assert_eq((char *)tmp->data, i);
        tmp = tmp->next;
    }
    delete_list(&list);
    cr_assert_eq(list, NULL);
}

Test(lib_tests, chained_list_generator_5)
{
    list_t *list = NULL;

    list = add_node(list, create_node((void *)0, sizeof(int)));
    cr_assert_eq((char *)list->data, 0);
    list = rm_last_node(list);
    cr_assert_eq(list, NULL);
    list = add_node(list, create_node((void *)0, sizeof(int)));
    list = rm_first_node(list);
    cr_assert_eq(list, NULL);
    list = add_node(list, create_node((void *)0, sizeof(int)));
    list = rm_index_node(list, 5);
    cr_assert_eq((char *)list->data, 0);
    list = rm_index_node(list, 0);
    cr_assert_eq(list, NULL);
    delete_list(&list);
    cr_assert_eq(list, NULL);
}
