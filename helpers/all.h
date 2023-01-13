#ifndef HELPERS__ALL_H
#define HELPERS__ALL_H

#include "../enums/sort_direction.h"
#include "../enums/sort_type.h"

#include "../structs/node.h"

extern struct Node *head;
extern struct Node *sorted;

void initialize_numbers(int count, int *numbers);
double sort(enum SortType sort_type, enum SortDirection sort_direction, int *numbers, int number_of_elements);
int check_order(enum SortDirection sort_direction, int *numbers, int number_of_elements);
void push_to_node(int number);
void show_numbers(int *numbers, int number_of_elements);
#endif //HELPERS__ALL_H
