cmake_minimum_required(VERSION 3.23.2)
project(ti_projekt C)

set(CMAKE_C_STANDARD 11)

add_executable(ti_projekt enums/sort_direction.h enums/sort_type.h structs/node.h helpers/all.h helpers/check_order.c helpers/initialize_numbers.c helpers/push_to_node.c helpers/show_numbers.c helpers/sort.c sort_algorithms/all.h sort_algorithms/bubble_sort.c sort_algorithms/insertion_sort.c sort_algorithms/merge_sort.c sort_algorithms/node_insertion_sort.c sort_algorithms/quick_sort.c tasks/all.h tasks/one.c tasks/two.c tasks/three.c tasks/four.c main.c)
