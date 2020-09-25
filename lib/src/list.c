// list.c
// chained list implementation.

#include "list.h"

static void destroy_node(list_t *node)
{
  free(node->data);
  free(node);
}

list_t *linit(void)
{
  list_t *list = malloc(sizeof(list_t));

  // initializing the list.
  return !list ? NULL : memset(list, 0, sizeof(list_t));
}

list_t *lpush(list_t *list, const void *data, size_t size)
{
  CHECK_PTR(list, NULL);
  CHECK_PTR(data, list);

  list_t *new_node = malloc(sizeof(list_t));
  CHECK_PTR(new_node, list);

  // initializing the node.
  new_node->data = malloc(sizeof(size));
  new_node->size = size;
  new_node->next = list;

  CHECK_PTR(new_node->data, list);

  // copying the data.
  memcpy(new_node->data, data, size);
  return new_node;
}

list_t *lremove(list_t *node, size_t n)
{
  CHECK_PTR(node, NULL);
  list_t *head = node;
  list_t *prev = node;

  if (!n) {
    head = node->next;
    destroy_node(node);
    return head;
  }

  for (size_t i = 0; node->size; ++i, node = node->next) {
    if (i == n) {
      prev->next = node->next;
      destroy_node(node);
      return head;
    }
    prev = node;
  }
  return head;
}

size_t lsize(const list_t *list)
{
  CHECK_PTR(list, 0);
  size_t size = 0;

  for (; list->size; list = list->next, ++size);
  return size;
}

void ldebug(const list_t *list)
{
  if (!list) {
    fprintf(stderr, "The list is unititialized.\n");
    return;
  }

  size_t size = lsize(list);

  if (!size) {
    printf("The list does not contain any item.\n");
    return;
  }

  printf("%ld item(s).\n", size);
  for (size_t i = 0; list->size; list = list->next, ++i)
    printf("  { index: '%ld', value: '%p', size: '%ld' }\n",
	   i,
	   list->data,
	   list->size);
}

void ldestroy(list_t *list)
{
  if (!list)
    return;

  size_t size = lsize(list);

  // the map has just been initialized.
  if (list && !size) {
    free(list);
    return;
  }

  if (size == 1) {
    free(list->next);
    destroy_node(list);
    return;
  }

  for (list_t *tmp = NULL; list->size; list = tmp) {
    tmp = list->next;
    destroy_node(list);
  }

  free(list);
}
