#include <iostream>
#define MAX 100  // Define the maximum size of the queue

class Queue {
private:
    int arr[MAX];
    int front, rear;
public:
    Queue() { front = rear = -1; }

    bool enqueue(int x) {
        if (rear == MAX - 1) {
            std::cout << "Queue Overflow\n";
            return false;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            return true;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            std::cout << "Queue Underflow\n";
            return -1;
        } else {
            return arr[front++];
        }
    }

    int frontElement() {
        if (front == -1) {
            std::cout << "Queue is Empty\n";
            return -1;
        } else {
            return arr[front];
        }
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};
