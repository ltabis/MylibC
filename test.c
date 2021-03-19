// test.c
// testing the library.

/* #include "map.h" */

/* int main(void) */
/* { */
/*   int a = 42; */
/*   int *ptr = &a; */

/*   map_t *map = map_init(); */

/*   map = map_push(map, */
/* 		 "first", */
/* 		 "duplicate me please", */
/* 		 20); */
/*   map = map_push(map, */
/* 		 "second", */
/* 		 ptr, */
/* 		 sizeof(int)); */

/*   // does not get inserted. */
/*   map = map_push(map, */
/* 		 "second", */
/* 		 ptr, */
/* 		 sizeof(int)); */

/*   map_debug(map); */
/*   map = map_remove(map, "first"); */
/*   map_debug(map); */

/*   const char *value1 = map_get(map, "first"); */
/*   const int *value2 = map_get(map, "second"); */

/*   if (value1) printf("My first value: %s\n", value1); */
/*   if (value2) printf("My second value: %d\n", *value2); */

/*   map_destroy(map); */
/*   return 0; */
/* } */

/* #include "list.h" */

/* int main(void) */
/* { */
/*   int a = 5; */
/*   unsigned int b = 3; */
/*   char *c = "I'm a string!"; */

/*   list_t *list = linit(); */
  
/*   list = lpush(list, &a, sizeof(int)); */
/*   list = lpush(list, &b, sizeof(unsigned int)); */
/*   list = lpush(list, &c, sizeof(char *)); */

/*   ldebug(list); */
/*   list = lremove(list, 0); */
/*   list = lremove(list, 9); */
/*   ldebug(list); */

/*   ldestroy(list); */
/*   return 0; */
/* } */

#include <stdio.h>
#include "my.h"

int main(void)
{
  char **board = malloc(sizeof(char *) * 3);

  board[0] = strdup("test1");
  board[1] = strdup("test2");
  board[2] = NULL;

  void **copy = my_copy_board((void * const *)board, sizeof(char *));

  for (unsigned int i = 0; copy[i]; ++i) {
    printf("original: %s, ptr: %p\n", board[i], &board[i]);
    printf("copy: %s, ptr: %p\n", (char *)copy[i], &copy[i]);
  }

  clean_board_memory(copy);
  clean_board_memory((void **)board);

  return 0;
}
