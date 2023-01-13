#include "../enums/sort_direction.h"

void bubble_sort(enum SortDirection sort_direction, int *numbers, int number_of_elements) {
    int i, j, tmp;

    switch (sort_direction) {
        case RANDOM:
        case ASCENDING:
            for (i = 0; i < number_of_elements; i++) {
                for (j = 0; j < number_of_elements - i; j++) {
                    if (numbers[j + 1] && numbers[j] > numbers[j + 1]) {
                        tmp = numbers[j];
                        numbers[j] = numbers[j + 1];
                        numbers[j + 1] = tmp;
                    }
                }
            }
            break;
        case DESCENDING:
            for(i = 0; i < number_of_elements; i++) {
                for(j = 0; j < number_of_elements - i - 1 ; ++j){
                    if(numbers[j + 1] && numbers[j] < numbers[j + 1]){
                        tmp = numbers[j];
                        numbers[j] = numbers[j + 1];
                        numbers[j + 1] = tmp;
                    }
                }
            }
            break;
        default:
            break;
    }
}