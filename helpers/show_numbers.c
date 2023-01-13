#include <stdio.h>

// Show numbers in console, separate them with a comma
// and show only 15 numbers in a row
void show_numbers(int *numbers, int number_of_elements) {
    for(int i = 0; i < number_of_elements; i++) {
        printf("%d", numbers[i]);
        if(i != number_of_elements - 1){
            printf(", ");
        }
        if(i != 0 && (i + 1) % 15 == 0){
            printf("\n");
        }
    }
    printf("\n");
}