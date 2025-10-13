#include <iostream>
using namespace std;

class queue {
    int A[5];
    int front, rear;

public:
    queue() {
        front = -1;
        rear = -1;
    }

    bool isOverflow() {
        if (rear == 4)  // last index of array
            return true;
        else
            return false;
    }

    bool isUnderflow() {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    void enqueue(int a) {
        if (isOverflow()) {
            cout << "Queue overflow condition. Element cannot be inserted.\n";
        }
        else if (front == -1 && rear == -1) {
            front = rear = 0;
            A[rear] = a;
            cout << "Customer " << a << " arrived and joined the line.\n";
        }
        else {
            rear++;
            A[rear] = a;
            cout << "Customer " << a << " arrived and joined the line.\n";
        }
    }

    void dequeue() {
        if (isUnderflow()) {
            cout << "Underflow condition. No item to delete.\n";
        }
        else if (front == rear) {
            cout << "Deleted element is: " << A[front] << endl;
            front = rear = -1;
        }
        else {
            cout << "Deleted element is: " << A[front] << endl;
            front++;
        }
    }

    void disp() {
        if (isUnderflow()) {
            cout << "The line is empty.\n";
        }
        else {
            cout << "Current line of customers: ";
            for (int i = front; i <= rear; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int x;
    int choice;
    char ch;
    queue Q;

    cout << "Welcome to the Coffee Shop Queue System\n";

    do {
        cout << "\nWhich operation do you want to perform:\n";
        cout << "1. Enqueue (Customer Arrives)\n";
        cout << "2. Dequeue (Serve Customer)\n";
        cout << "3. Display Queue\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "This is enqueue operation.\n";
                cout << "Enter value to be inserted: ";
                cin >> x;
                Q.enqueue(x);
                break;

            case 2:
                cout << "This is dequeue operation.\n";
                Q.dequeue();
                break;

            case 3:
                Q.disp();
                break;

            default:
                cout << "Invalid choice.\n";
        }

        cout << "\nDo you wish to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "\nThank you for visiting the Coffee Shop!\n";
    return 0;
}
