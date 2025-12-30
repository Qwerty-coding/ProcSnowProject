#include "Made_Sl.h"
Node* convertArr_SL(const std::vector<int> &arr){
    int n = arr.size();
    if(n==0) return nullptr;
    Node* head =new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}