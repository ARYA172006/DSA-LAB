#include <iostream>
using namespace std;

class queue {
    int A[10];      // Fixed array size = 10
    int front, rear;
    int size;

public:
    queue() {
        size = 10;
        front = -1;
        rear = -1;
    }

    bool isOverflow() {
        if ((rear + 1) % size == front)
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

    void enqueue(int jobID) {
        if (isOverflow()) {
            cout << "Printer Queue is full. Job " << jobID << " cannot be added.\n";
        }
        else if (front == -1 && rear == -1) {
            front = rear = 0;
            A[rear] = jobID;
            cout << "Print Job " << jobID << " added to the spooler.\n";
        }
        else {
            rear = (rear + 1) % size;
            A[rear] = jobID;
            cout << "Print Job " << jobID << " added to the spooler.\n";
        }
    }

    void dequeue() {
        if (isUnderflow()) {
            cout << "No print jobs in the queue. Underflow condition.\n";
        }
        else if (front == rear) {
            cout << "Completed Print Job: " << A[front] << endl;
            front = rear = -1;
        }
        else {
            cout << "Completed Print Job: " << A[front] << endl;
            front = (front + 1) % size;
        }
    }

    void disp() {
        if (isUnderflow()) {
            cout << "No print jobs in the spooler.\n";
        }
        else {
            cout << "Current Print Jobs in Queue: ";
            int i = front;
            while (true) {
                cout << A[i] << " ";
                if (i == rear)
                    break;
                i = (i + 1) % size;
            }
            cout << endl;
        }
    }
};

int main() {
    int jobID;
    int choice;
    char ch;
    queue Q;

    cout << "----- Printer Spooler System (Circular Queue - Size 10) -----\n";

    do {
        cout << "\nSelect Operation:\n";
        cout << "1. Add Print Job (Enqueue)\n";
        cout << "2. Complete Print Job (Dequeue)\n";
        cout << "3. Display Print Jobs\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Print Job ID to add: ";
                cin >> jobID;
                Q.enqueue(jobID);
                break;

            case 2:
                Q.dequeue();
                break;

            case 3:
                Q.disp();
                break;

            default:
                cout << "Invalid choice.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "\nAll pending print jobs handled. Exiting Printer Spooler.\n";
    return 0;
}
