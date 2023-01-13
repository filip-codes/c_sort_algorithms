#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../enums/sort_type.h"
#include "../enums/sort_direction.h"

#include "all.h"
#include "../helpers/all.h"
#include "../sort_algorithms/all.h"

struct Node *head = NULL;
struct Node *sorted = NULL;

void execute_task_four() {
    int *numbers;

    const int array_size = 2048;

    // Allocate memory for X numbers
    numbers = malloc(array_size * sizeof(int));

    // Initialize numbers - numbers are generated between -32.768 - +32767
    initialize_numbers(array_size, numbers);

    // Push numbers to node
    for (int i = 0; i < array_size; i++)
        push_to_node(numbers[i]);

    clock_t start_time = clock();

    node_insertion_sort();

    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print numbers at the end to show sorted numbers
    int headCount = 1;

    while (head != NULL) {
        printf("%d", head->currentNumber);

        if(headCount != array_size)
            printf("->");

        head = head->nextNode;

        if(headCount % 15 == 0)
            printf("\n");

        headCount++;
    }
    printf("\n\n");

    printf("sorting list of size: %d\n", array_size);
    printf("single linked list insertionsort: %fs\n", total_time);

    sort(INSERTIONSORT, ASCENDING, numbers, array_size);

    free(head);
    free(numbers);
}