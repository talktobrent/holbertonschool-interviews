#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int binary_search_help(int *array, size_t lo, size_t hi, int value);
int binary_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */

