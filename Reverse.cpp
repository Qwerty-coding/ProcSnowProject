#include "Reverse.h"

void reverseList(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next_node = nullptr;

    while (current != nullptr) {
        
        next_node = current->next;

        current->next = prev;

        prev = current;
        current = next_node;
    }

    head = prev;
}