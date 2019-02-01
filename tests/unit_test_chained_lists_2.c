/*
** EPITECH PROJECT, 2017
** unit_test_chained_lists_2.c
** File description:
** unti tests for chained list p2
*/

#include "proto.h"
#include "test.h"
#include "my.h"

Test(lib_tests, chained_list_generator_6)
{
    list_t *list = create_node(5, sizeof(int));
    list_t *idx1 = NULL;
    list_t *idx2 = NULL;
    list_t *idx3 = NULL;

    list = add_node(list, create_node(4, sizeof(int)));
    list = add_node(list, create_node(24, sizeof(int)));
    idx1 = get_element(list, 0);
    idx2 = get_element(list, 1);
    idx3 = get_element(list, 2);
    cr_assert_eq(idx1->data, 5);
    cr_assert_eq(idx2->data, 4);
    cr_assert_eq(idx3->data, 24);
    idx3 = get_element(list, 3);
    cr_assert_eq(idx3, NULL);
    delete_list(&list);
    cr_assert_eq(list, NULL);
}
