/*
** EPITECH PROJECT, 2019
** my_isempty.c
** File description:
** checks if current character is empty
*/

#include "proto.h"

int my_isempty(char c)
{
    return (!c || c == '\t' || c == ' ' || c == '\n' ? TRUE : FALSE);
}
