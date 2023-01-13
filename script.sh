#!/bin/bash

gcc enums/sort_direction.h enums/sort_type.h structs/node.h helpers/all.h helpers/check_order.c helpers/initialize_numbers.c helpers/push_to_node.c helpers/show_numbers.c helpers/sort.c sort_algorithms/all.h sort_algorithms/bubble_sort.c sort_algorithms/insertion_sort.c sort_algorithms/merge_sort.c sort_algorithms/node_insertion_sort.c sort_algorithms/quick_sort.c tasks/all.h tasks/one.c tasks/two.c tasks/three.c tasks/four.c main.c -o ./sort_everything -Wall -Wextra

echo "Program './sort_everything' was compiled successfully!"

./sort_everything 1 > task_one.txt
echo "'task_one.txt' was created"
./sort_everything 2 > task_two.txt
echo "'task_two.txt' was created"
./sort_everything 3 > task_three.txt
echo "'task_three.txt' was created"
./sort_everything 4 > task_four.txt
echo "'task_four.txt' was created"
