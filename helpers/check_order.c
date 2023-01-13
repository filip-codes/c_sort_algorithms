#include "../enums/sort_direction.h"

#include "all.h"

// check_order() checks if the sorted numbers are in the correct order
// and returns 1 if it's not correct
// returns 0 if everything was ok
int check_order(enum SortDirection sort_direction, int *numbers, int number_of_elements) {
    for (int i = 0; i < number_of_elements; i++) {
        switch (sort_direction) {
            case RANDOM:
            case ASCENDING:
                if (*(numbers + i + 1) && *(numbers + i) > *(numbers + i + 1))
                    return 1;

                break;
            case DESCENDING:
                if (*(numbers + i + 1) && *(numbers + i) < *(numbers + i + 1))
                    return 1;

                break;
            default:
                return 0;
        }
    }
    // All fine
    return 0;
}