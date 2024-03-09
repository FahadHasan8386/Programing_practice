#include <iostream>
using namespace std;
#define MAX_SIZE 5

class CQueue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    CQueue() {
        front = rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1));
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue overflow!!!" << endl;
            return;
        }

        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % MAX_SIZE;

        arr[rear] = value;
        cout << value << " enqueued successfully." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        int removed = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;

        cout << removed << " dequeued successfully." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        cout << endl;
    }
};

int main() {
    CQueue cirq;
    int option, value;

    while (true) {
        cout << "What you want to do?"<<endl;
        cout << "1. Enqueue element in the queue"<<endl;
        cout << "2. Dequeue element from the queue"<<endl;
        cout << "3. Display the queue"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your option: ";
        cin >> option;

        if (option==1) {

                cout << "Enter value to enqueue: ";
                cin >> value;
                cirq.enqueue(value);
                continue;
        }
            else if(option==2){
                cirq.dequeue();
                 continue;
            }

            else if(option==3) {
                cirq.display();
                 continue;
            }

            else if(option==4){
                cout << "Exiting program." << endl;
                return 0;
            }

            else{
                 cout << "Invalid option. Please try again." << endl;
            }

        }
}
