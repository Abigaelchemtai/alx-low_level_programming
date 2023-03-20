#ifndef main_h
#define main_h

#include  <stdio.h>
#include "dog.h"
#include "1-init_dog.c"
#include "2-print_dog.c"
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
