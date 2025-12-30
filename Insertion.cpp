#include "Insertion.h"

Node* Insertion_Kth_position(Node* head,Node* el,int k){
    if(head==nullptr && k==1) return el;
    if(head==nullptr &&k !=1) return nullptr;
    if(k==1){
        el->next = head;
        return el;
    }
    
    Node* temp = head;
    int cnt =1;
    while(temp!=nullptr){
        if(cnt == k-1){
             el->next = temp->next;
             temp->next = el;
             break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;


    

}