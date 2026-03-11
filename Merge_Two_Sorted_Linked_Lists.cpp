#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* mergeLists(Node* l1, Node* l2) {

    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    if(l1->data < l2->data) {
        l1->next = mergeLists(l1->next, l2);
        return l1;
    }
    else {
        l2->next = mergeLists(l1, l2->next);
        return l2;
    }
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* list1 = new Node{1};
    list1->next = new Node{3};
    list1->next->next = new Node{5};

    Node* list2 = new Node{2};
    list2->next = new Node{4};
    list2->next->next = new Node{6};

    Node* merged = mergeLists(list1, list2);

    printList(merged);

}