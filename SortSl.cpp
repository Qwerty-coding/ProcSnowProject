#include "SortSl.h"

void sortList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return; 
    }

    Node* current = head;
    Node* index = nullptr;
    int temp;

    while (current != nullptr) {
    index = current->next;
        
        while (index != nullptr) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}