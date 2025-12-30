#include <bits/stdc++.h>
using namespace std;

#include "print_ll.h"

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}