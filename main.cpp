#include <bits/stdc++.h>
using namespace std;

#include "Delete.h"
#include "Made_Sl.h"
#include "print_ll.h"
#include "Insertion.h"




int main() {
    vector<int> arr ={1,4,3,7,2};
    Node* head = convertArr_SL(arr);

    printLL(head);
    head = deleteKth(head, 3);
    printLL(head);

   
}
