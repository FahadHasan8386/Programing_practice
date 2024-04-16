#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
void searchItem(Node* head, int item) {
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == item) {
            cout << "Found\n";
            return;
        }
        temp = temp->link;
    }

    cout << "Not Found\n";
}

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->link = head;
    head = newNode;
}

void insertAfter(Node* prevNode, int value) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = value;
    newNode->link = prevNode->link;
    prevNode->link = newNode;
}

int main() {

    Node* head = new Node();
    head->data = 45;
    head->link = nullptr;

    Node* current = new Node();
    current->data = 3;
    current->link = nullptr;
    head->link = current;


    current->link = new Node();
    current = current->link;
    current->data = 5;
    current->link = nullptr;


    cout << "Original List: ";
    displayList(head);


    insertAtBeginning(head, 10);
    cout << "Inserting at the beginning: ";
    displayList(head);

    current = head->link;
    insertAfter(current, 7);
    cout << "Inserting after the second node: ";
    displayList(head);

    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->link;
        delete temp;
    }

    int item = 10;
    searchItem(head ,item);

    return 0;
}
