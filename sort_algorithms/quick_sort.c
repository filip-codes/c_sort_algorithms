#include "../enums/sort_direction.h"

void quick_sort(enum SortDirection sort_direction, int *numbers, int left, int right) {
    int temp;

    switch (sort_direction) {
        case RANDOM:
        case ASCENDING:
            if (left < right) {
                // Take the element in the middle as a reference for comparison, move to the left less than it, move to the right greater than it
                int middle = numbers[(left + right) / 2];
                int i = left - 1;
                int j = right + 1;

                while (1) {
                    while (numbers[++i] < middle && i < right) ;//Find elements smaller than the middle value from the left
                    while (numbers[--j] > middle && j > 0) ;//Find elements larger than the middle value from the right

                    if (i >= j)
                        break;

                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
                quick_sort(sort_direction, numbers, left, i - 1);
                quick_sort(sort_direction, numbers, j + 1, right);
            }
            break;
        case DESCENDING:
            //If the left index is less than the right, the sort is not yet complete
            if (left < right) {
                //Take the element in the middle as a reference, move to the right less than it, move to the left greater than it
                int middle = numbers[(left + right) / 2];
                int i = left - 1;
                int j = right + 1;

                while (1) {
                    while (numbers[++i] > middle && i < right);//Find elements smaller than the middle value from the left
                    while (numbers[--j] < middle && j > 0);//Find elements larger than the middle value from the right

                    if (i >= j)
                        break;

                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
                quick_sort(sort_direction, numbers, left, i - 1);
                quick_sort(sort_direction, numbers, j + 1, right);
            }
            break;
        default:
            break;
    }
}