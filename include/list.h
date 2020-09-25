// list.h
// chained list declaration.

#ifndef LIST_H_
#define LIST_H_

#include "my.h"
#include <stdio.h>

typedef struct list_s {
  void *data;
  size_t size;

  struct list_s *next;
} list_t;

list_t *linit(void);
list_t *lpush(list_t *list, const void *data, size_t size);
list_t *lremove(list_t *node, size_t n);
size_t lsize(const list_t *list);
void ldebug(const list_t *list);
void ldestroy(list_t *list);

#endif /* ! LIST_H_ */
