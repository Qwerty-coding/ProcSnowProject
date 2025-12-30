#include "Delete.h"

Node* deleteKth(Node* head, int k){
    if(head == nullptr) return head;

    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp->next != nullptr){
        if(cnt == k-1){
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}

