#include <stdio.h>
#include <stdlib.h>

#include "../structs/node.h"
#include "all.h"

void push_to_node(int number) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->currentNumber = number;
    // set head node as next node
    new_node->nextNode = head;
    // switch created node to head node and link it
    head = new_node;
}