#include <stdio.h>

/**
 * linear_search - function that searches for a value in 
 * an array of integers using the Linear search algorithm
 *
 * @array: The arry to be searched
 * @size: size of the array
 * @value: The value to be searched
 * Return: -1 on failer and the index on success
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing array[%zu] = %d to %d\n", i, array[i], value);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
