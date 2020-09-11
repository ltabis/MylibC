// map.h
// pointer map struct declaration

#ifndef MAP_H_
#define MAP_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Is used to determine memory freeing
typedef enum insert { DUPLICATE, COPY } insert;

typedef struct map_s {
  char *key;
  void *value;
  size_t value_size;

  insert insertion_type;
  struct map_s *next;
} map_t;

map_t *map_init(void);
map_t *map_push(map_t *map,
		const char *key,
		void *ptr,
		size_t value_size,
		insert insertion_type);
map_t *map_remove(map_t *map, const char *key);
void *map_get(map_t *map, const char *key);
size_t map_size(map_t *map);

void map_debug(map_t *map);

void map_destroy(map_t *map);

#endif /* ! MAP_H_ */
