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
	int i;

	if (array == NULL) {
		return (-1);
	}
    for (i = 0; i < (int)size; i++) {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (i);
        }
    }
    return -1;
}
