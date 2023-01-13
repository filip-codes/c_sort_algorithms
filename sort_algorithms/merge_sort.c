#include "../enums/sort_direction.h"

// Needed for merge_sort() method to sort in ascending order
// e.g.
// { 1, 3 } & { 5 } will be merged to:
// { 1, 3, 5 }
void merge(enum SortDirection sort_direction, int *numbers, int low, int mid, int high) {
    int b[high]; //same size of a[]
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while(i <= mid && j <= high)
    {
        switch (sort_direction) {
            case RANDOM:
            case ASCENDING:
                if(numbers[i] <= numbers[j])
                    b[k++] = numbers[i++];
                else
                    b[k++] = numbers[j++];
                break;
            case DESCENDING:
                if(numbers[i] >= numbers[j])
                    b[k++] = numbers[i++];
                else
                    b[k++] = numbers[j++];
                break;
        }
    }
    while (i <= mid)
        b[k++] = numbers[i++];
    while
            (j <= high) b[k++] = numbers[j++];
    for (k = low; k <= high;k++)
        numbers[k] = b[k];
}

// The merge sort will split the array into multiple pieces
// and merge them afterwards together
void merge_sort(enum SortDirection sort_direction, int *numbers, int low, int high) {
    int mid;

    // Merge sort will be called recursively until there is nothing to merge anymore
    if(low >= high)
        return;
    mid=(low + high) / 2;
    merge_sort(sort_direction, numbers, low, mid);
    merge_sort(sort_direction, numbers, mid + 1, high);
    merge(sort_direction, numbers, low, mid, high);
}