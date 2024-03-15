#include <iostream>
using namespace std;
#define MAX 4

int stack_arr[MAX];
int top = -1;

int isFull() {
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop() {
    int value;
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    return stack_arr[top];
}

void print() {
    int i;
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    for (i = top; i >= 0; i--) {
        cout << stack_arr[i] << endl;
    }
}

int main() {
    int choice, data;
    while (1) {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print the top element " << endl;
        cout << "4. Print all the element of the stack" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the element to be pushed : ";
                cin >> data;
                push(data);
                break;
            case 2:
                data = pop();
                cout << "Deleted element is : " << data << endl;
                break;
            case 3:
                if (!isEmpty())
                    cout << "The topmost element of the stack is : " << peek() << endl;
                break;
            case 4:
                print();
                break;
            case 5:
                exit(0);
            default:
                cout << "Wrong Choice" << endl;
                break;
        }
    }
    return 0;
}
