#include <stdlib.h>

#include "all.h"

// Generate numbers between -32.768 - +32.767
void initialize_numbers(int count, int *numbers) {
    for (int i = 0; i < count; i++) {
        numbers[i] = (rand() % 65535 + 1) - 32768;
    }
}
