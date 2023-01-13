#include <stdio.h>
#include <time.h>

#include "../enums/sort_type.h"
#include "../enums/sort_direction.h"

#include "all.h"
#include "../sort_algorithms/all.h"


// Sort function, which decides what sort algorithm will be executed
// e.g.
// If sort_type has value for "BUBBLESORT", then bubble_sort() function
// will be executed
double sort(enum SortType sort_type, enum SortDirection sort_direction, int *numbers, int number_of_elements) {
    // start_time, end_time are needed to store timestamps coming from clock()
    clock_t start_time, end_time;
    // total_time is needed to print measured time in seconds
    double total_time;

    start_time = clock();

    // Decide, which sort algorithm will be executed
    switch (sort_type) {
        case INSERTIONSORT:
            insertion_sort(sort_direction, numbers, number_of_elements);
            break;
        case BUBBLESORT:
            bubble_sort(sort_direction, numbers, number_of_elements);
            break;
        case QUICKSORT:
            quick_sort(sort_direction, numbers, 0, number_of_elements - 1);
            break;
        case MERGESORT:
            merge_sort(sort_direction, numbers, 0, number_of_elements - 1);
            break;
        default:
            printf("The sort algorithm was not found. Exit...\n");
            return 1;
    }
    end_time = clock();
    // Calculate total_time
    total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Show needed time for specific sort algorithm
    // e.g.
    // sort on randomized array of size 8:
    // bubblesort:    0.000002s
    // quicksort:     0.000001s
    // mergesort:     0.000001s
    // insertionsort: 0.000000s
    // sort on ascending array of size 8:
    // bubblesort:    0.000000s
    // quicksort:     0.000000s
    // mergesort:     0.000000s
    // insertionsort: 0.000000s
    // sort on descending array of size 8:
    // bubblesort:    0.000000s
    // quicksort:     0.000001s
    // mergesort:     0.000001s
    // insertionsort: 0.000000s
    switch (sort_type) {
        case INSERTIONSORT:
            printf("insertionsort: %fs\n", total_time);
            break;
        case BUBBLESORT:
            printf("bubblesort:    %fs\n", total_time);
            break;
        case QUICKSORT:
            printf("quicksort:     %fs\n", total_time);
            break;
        case MERGESORT:
            printf("mergesort:     %fs\n", total_time);
            break;
        default:
            break;
    }

    // Error handling
    // Check if the order is correct. This executes every time after numbers have been sorted
    if (check_order(sort_direction, numbers, number_of_elements) == 1) {
        printf("The order is wrong\n");
    }

    return total_time;
}
