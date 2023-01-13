#include <stdlib.h>

#include "../structs/node.h"
#include "../helpers/all.h"

/*
 * function to insert a new_node in a list. Note that
 * this function expects a pointer to head_ref as this
 * can modify the head of the input linked list
 * (similar to push())
 */
void node_sorted_insert(struct Node* new_node) {
    /* Special case for the head end */
    if (sorted == NULL || sorted->currentNumber >= new_node->currentNumber) {
        new_node->nextNode = sorted;
        sorted = new_node;
    } else {
        struct Node* currentNode = sorted;
        // Locate the node before the point of insertion
        while (currentNode->nextNode != NULL && currentNode->nextNode->currentNumber < new_node->currentNumber)
            currentNode = currentNode->nextNode;

        new_node->nextNode = currentNode->nextNode;
        currentNode->nextNode = new_node;
    }
}

void node_insertion_sort() {
    struct Node *currentNode = head;

    // Traverse the given linked list and insert every
    // node to sorted
    while (currentNode != NULL) {
        // Store next for next iteration
        struct Node* nextNode = currentNode->nextNode;

        // insert current in sorted linked list
        node_sorted_insert(currentNode);

        // Update currentNode to nextNode
        currentNode = nextNode;
    }
    // Update head node
    head = sorted;
}
