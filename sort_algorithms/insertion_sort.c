#include "../enums/sort_direction.h"

void insertion_sort(enum SortDirection sort_direction, int *numbers, int number_of_elements) {
    int i, key, j;

    switch (sort_direction) {
        case RANDOM:
        case ASCENDING:
            for (i = 1; i < number_of_elements; i++) {
                key = numbers[i];
                j = i - 1;

                while (j >= 0 && *(numbers + j) > key) {
                    *(numbers + j + 1) = *(numbers + j);
                    j = j - 1;
                }
                *(numbers + j + 1) = key;
            }
            break;
        case DESCENDING:
            for(i = 1; i < number_of_elements; i++) {
                j = i;
                while(j > 0 && *(numbers + j) > *(numbers + j - 1)) {
                    int temp = *(numbers + j);
                    *(numbers + j) = *(numbers + j - 1);
                    *(numbers + j - 1)=temp;

                    j = j - 1;
                }
            }
            break;
        default:
            break;
    }
}