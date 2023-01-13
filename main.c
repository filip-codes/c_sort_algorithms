#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "tasks/all.h"

int main(int argc, char *argv[]) {
    // Initialize seed for rand() function
    srand(time(0));

    // Print info if second argument was not set
    if(argc != 2) {
        printf("USAGE: ./sort_everything <task_number>\n\n");
        printf("INFO: <task_number>: int\n\n");
        printf("Options:\n");
        printf("1 - 'Basisimplementierung'\n");
        printf("2 - 'Leistungsvergleich Sortieralgorithmen'\n");
        printf("3 - 'Vergleichbarkeit bezueglich Daten'\n");
        printf("4 - 'Verkettete Liste und Insertionsort'\n");

        return 1;
    }

    int task_number = atoi(argv[1]);

    switch (task_number) {
        case 1:
            printf("Executing first task:\n\n");
            execute_task_one();
            break;
        case 2:
            printf("Executing second task:\n\n");
            execute_task_two();
            break;
        case 3:
            printf("Executing third task:\n\n");
            execute_task_three();
            break;
        case 4:
            printf("Executing fourth task:\n\n");
            execute_task_four();
            break;
        default:
            printf("Task %d is not defined. Please try again...\n", task_number);
            break;
    }
    return 0;
}
