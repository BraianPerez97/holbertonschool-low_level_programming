#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Searches for value in an array
 * @array: A pointer to firts element in array
 * @size: Size of array
 * @value: Value to search
 * Return: Index of the value in the array
 */
int linear_search(int *array, size_t size, int value) {
  for (int i = 0; i < size; i++) {
    printf("Value checked: %d\n", array[i]);
    if (array[i] == value) {
      return i;
    }
  }

  return -1;
}
