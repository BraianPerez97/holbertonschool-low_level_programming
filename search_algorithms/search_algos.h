#ifndef SEARCH_ALGOS_
#define SEARCH_ALGOS_
/*----------LIBRARIES----------*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/*----------PROTOTYPES----------*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
