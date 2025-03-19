#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
void printListElements(Node* head){
    Node* curr = head;
    while (curr != nullptr){
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "null" << endl;
}
void insertAtFront(Node** head, int newValue){
    // Create a new node & add the data to that node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(Node** head, int newValue){
    // Create a new node & add the data to that node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr; // Because it will be the last
    // Empty list:
    if (*head == nullptr){
        *head = newNode; // New node becomes head
        return;
    }
    // List has multiple nodes
    // Find the last node
    Node* last = *head;
    while (last->next != nullptr){
        last = last->next;
    }
    last->next = newNode;
}
void deleteFrontNode(Node** head){
    if (*head == nullptr){
        cout << "Empty list." << endl;
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}
void deleteEndNode(Node** head){
    if (*head == nullptr){
        cout << "Empty list." << endl;
        return;
    }
    // Single node
    if ((*head)->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }
    // Multiple Nodes
    Node* last = *head;
    Node* secondLast = nullptr;
    while (last->next != nullptr){
        secondLast = last;
        last = last->next;
    }
    delete last;
    secondLast->next = nullptr;
}
int main() {
    // 1 -> 2 -> 3 -> null
//    Node* head = new Node();
//    head->data = 1;
//    Node* second = new Node();
//    second->data = 2;
//    Node* third = new Node();
//    third->data = 3;
//    head->next = second;
//    second->next = third;
//    third->next = nullptr;
    Node* head = nullptr;
    insertAtFront(&head, 3);
    insertAtFront(&head,2);
    insertAtFront(&head,1);
    int arr[] = {4,5,6,7,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        insertAtEnd(&head, arr[i]);
    }
    printListElements(head);
    cout << "List before deleting head: ";
    printListElements(head);
    deleteFrontNode(&head);
    cout << "List after deleting head: ";
    printListElements(head);

    cout << "List before deleting tail: ";
    printListElements(head);
    deleteEndNode(&head);
    cout << "List after deleting tail: ";
    printListElements(head);
    return 0;
}
