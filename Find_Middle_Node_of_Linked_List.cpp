#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* middleNode(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    Node* head = new Node{1};
    head->next = new Node{2};
    head->next->next = new Node{3};
    head->next->next->next = new Node{4};
    head->next->next->next->next = new Node{5};

    Node* mid = middleNode(head);

    while(mid != NULL) {
        cout << mid->data << " ";
        mid = mid->next;
    }

}