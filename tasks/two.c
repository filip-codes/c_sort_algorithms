#include <stdio.h>
#include <stdlib.h>

#include "../enums/sort_direction.h"
#include "../enums/sort_type.h"

#include "all.h"
#include "../helpers/all.h"

void execute_task_two() {
    int *numbers;
    // Store all sizes in array to iterate over them
    int array_sizes[] = {8, 32, 128, 512, 2048, 8192, 32768};
    // Get array_sizes[] length -> 7 elements
    int array_sizes_length = sizeof(array_sizes) / sizeof(array_sizes[0]);

    for (int i = 0; i < array_sizes_length; i++) {
        // Allocate memory for X numbers
        numbers = malloc(array_sizes[i] * sizeof(int));
        // Initialize numbers - numbers are generated between -32.768 - +32767
        initialize_numbers(array_sizes[i], numbers);

        // Array is randomized - sort it ascending
        printf("sort on randomized array of size %d:\n", array_sizes[i]);
        sort(BUBBLESORT, RANDOM, numbers, array_sizes[i]);
        sort(QUICKSORT, RANDOM, numbers, array_sizes[i]);
        sort(MERGESORT, RANDOM, numbers, array_sizes[i]);
        sort(INSERTIONSORT, RANDOM, numbers, array_sizes[i]);
        printf("\n");

        // Array is already sorted in ascending order - sort it ascending
        printf("sort on ascending array of size %d:\n", array_sizes[i]);
        sort(BUBBLESORT, ASCENDING, numbers, array_sizes[i]);
        sort(QUICKSORT, ASCENDING, numbers, array_sizes[i]);
        sort(MERGESORT, ASCENDING, numbers, array_sizes[i]);
        sort(INSERTIONSORT, ASCENDING, numbers, array_sizes[i]);
        printf("\n");

        // Array is sorted in ascending order - sort it descending
        printf("sort on descending array of size %d:\n", array_sizes[i]);
        sort(BUBBLESORT, DESCENDING, numbers, array_sizes[i]);
        sort(QUICKSORT, DESCENDING, numbers, array_sizes[i]);
        sort(MERGESORT, DESCENDING, numbers, array_sizes[i]);
        sort(INSERTIONSORT, DESCENDING, numbers, array_sizes[i]);
        printf("\n");

        // Set numbers to NULL to clean up numbers
        numbers = NULL;
    }
    free(numbers);
}