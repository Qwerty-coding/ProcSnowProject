#include <bits/stdc++.h>
using namespace std;

#include "Delete.h"
#include "Made_Sl.h"
#include "print_ll.h"
#include "Insertion.h"
#include "Size_SL.h"
#include "Reverse.h"
#include "Search.h"


int main() {
    vector<int> arr ={1,4,3,7,2};
    Node* head = convertArr_SL(arr);

    printLL(head);
    head = deleteKth(head, 3);
    printLL(head);

    int s = getSize(head); 
    cout << "size of list: " << s << endl;

    int target = 7;
    if (searchNode(head, target)) {
        cout << "Value " << target << " was Found!" << endl;
    } else {
        cout << "Value " << target << " was NOT Found." << endl;
    }

    reverseList(head);
    printLL(head);
   
}
