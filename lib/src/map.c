// map.c
// map implementation.

#include "map.h"

map_t *map_init(void)
{
  map_t *map = malloc(sizeof(map_t));

  return !map ? NULL : memset(map, 0, sizeof(map_t));
}

map_t *map_push(map_t *map,
		const char *key,
		void *value,
		size_t value_size)
{
  CHECK_PTR(map, NULL);
  CHECK_PTR(key, map);

  if (map_get(map, key))
    return map;

  map_t *node = malloc(sizeof(map_t));

  CHECK_PTR(node, map);

  node->key = strdup(key);
  node->value = malloc(value_size);

  CHECK_PTR(node->value, map);

  memcpy(node->value, value, value_size);
  node->value_size = value_size;
  node->next = map;
  return node;
}

void destroy_node(map_t *map)
{
  free(map->value);
  free(map->key);
  free(map);
}

map_t *map_remove(map_t *map, const char *key)
{
  CHECK_PTR(map, NULL);
  CHECK_PTR(key, map);

  map_t *head = map;
  map_t *last_node = map;

  for (; map->key; last_node = map, map = map->next)
    if (!strcmp(key, map->key))
      break;
  
  if (!map->key)
    return map;

  if (last_node != map)
    last_node->next = map->next;
  else
    head = map->next;

  destroy_node(map);
  return head;
}

void *map_get(map_t *map, const char *key)
{
  CHECK_PTR(map, NULL);
  CHECK_PTR(key, NULL);

  for (; map->key; map = map->next)
    if (!strcmp(key, map->key))
      return map->value;

  return NULL;
}

size_t map_size(map_t *map)
{
  CHECK_PTR(map, 0);
  size_t size = 0;

  for (; map->key; map = map->next, ++size);
  return size;
}

void map_debug(map_t *map)
{
  if (!map) {
    fprintf(stderr, "The map is unititialized.\n");
    return;
  }

  size_t size = map_size(map);

  if (!size) {
    printf("The map does not contain any item.\n");
    return;
  }

  printf("%ld item(s).\n", size);
  for (; map->key; map = map->next)
    printf("  { key: '%s', value: '%p' }\n", map->key, map->value);
}

void map_destroy(map_t *map)
{
  if (!map)
    return;

  size_t size = map_size(map);

  if (!size) {
    free(map);
    return;
  }

  if (size == 1) {
    free(map->next);
    destroy_node(map);
    return;
  }

  for (map_t *tmp = NULL; map->key; map = tmp) {
    tmp = map->next;
    destroy_node(map);
  }

  free(map);
}
