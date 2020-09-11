// test.c
// testing the library.

#include "map.h"

int main(void)
{
  int a = 42;
  int *ptr = &a;

  map_t *map = map_init();

  // duplicate the data pointed to.
  map = map_push(map,
		 "first",
		 "duplicate me please",
		 20,
		 DUPLICATE);

  // only copy the pointer.
  map = map_push(map,
		 "second",
		 ptr,
		 sizeof(int *),
		 COPY);

  // does not get inserted.
  map = map_push(map,
		 "second",
		 ptr,
		 sizeof(int *),
		 COPY);

  map_debug(map);
  map = map_remove(map, "first");
  map_debug(map);

  const char *value1 = map_get(map, "first");
  const int *value2 = map_get(map, "second");

  if (value1) printf("My first value: %s\n", value1);
  if (value2) printf("My second value: %d\n", *value2);

  map_destroy(map);
  return 0;
}
