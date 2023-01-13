#include <stdio.h>
#include <stdlib.h>

#include "../enums/sort_type.h"
#include "../enums/sort_direction.h"

#include "all.h"
#include "../helpers/all.h"

void execute_task_one() {
    int *numbers;
    // Store all sizes in array to iterate over them
    int array_sizes[] = {8, 16, 64};
    // Get array_sizes[] length -> 3 elements
    int array_sizes_length = sizeof(array_sizes) / sizeof(array_sizes[0]);

    for (int i = 0; i < array_sizes_length; i++) {
        // Allocate memory for X numbers
        numbers = malloc(array_sizes[i] * sizeof(int));
        // Initialize numbers - numbers are generated between -32.768 - +32767
        initialize_numbers(array_sizes[i], numbers);

        printf("Unsorted numbers after generation\n");
        show_numbers(numbers, array_sizes[i]);
        printf("\n");

        // Array is randomized - sort it ascending
        printf("sort on randomized array of size %d:\n", array_sizes[i]);
        sort(BUBBLESORT, ASCENDING, numbers, array_sizes[i]);
        sort(QUICKSORT, ASCENDING, numbers, array_sizes[i]);
        sort(MERGESORT, ASCENDING, numbers, array_sizes[i]);
        sort(INSERTIONSORT, ASCENDING, numbers, array_sizes[i]);

        // Print numbers at the end to show sorted numbers
        show_numbers(numbers, array_sizes[i]);

        // Set numbers to NULL to clean up numbers
        numbers = NULL;
    }
    free(numbers);
}