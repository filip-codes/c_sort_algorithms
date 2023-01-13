#ifndef SORT_ALGORITHMS__ALL_H
#define SORT_ALGORITHMS__ALL_H

#include "../enums/sort_direction.h"
#include "../structs/node.h"

void bubble_sort(enum SortDirection sort_direction, int *numbers, int number_of_elements);

void merge(enum SortDirection sort_direction, int *numbers, int low, int mid, int high);
void merge_sort(enum SortDirection sort_direction, int *numbers, int low, int high);

void insertion_sort(enum SortDirection sort_direction, int *numbers, int number_of_elements);

void node_insertion_sort();
void node_sorted_insert(struct Node* sorted, struct Node* new_node);

void quick_sort(enum SortDirection sort_direction, int *numbers, int left, int right);
#endif //SORT_ALGORITHMS__ALL_H
