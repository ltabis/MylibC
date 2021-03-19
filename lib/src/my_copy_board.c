/*
** EPITECH PROJECT, 2018
** my_copy_env.c
** File description:
** function that copies an entire board
*/

#include "my.h"

void clean_board_memory(void **cpy)
{
  for (size_t i = 0; cpy[i]; ++i)
    free(cpy[i]);
  free(cpy);
}

size_t get_board_len(void * const *src)
{
  size_t i = 0;

  for (; src[i]; ++i);
  return (i);
}

void **my_copy_board(void * const *src, size_t data_size)
{
  size_t board_len = get_board_len(src);
  void **cpy = malloc(data_size * (board_len + 1));

  if (!cpy)
    return (NULL);

  for (size_t i = 0; src[i]; ++i)
    if (!(cpy[i] = strndup(src[i], data_size)))
      return (NULL);
  cpy[board_len] = 0;
  return (cpy);
}
