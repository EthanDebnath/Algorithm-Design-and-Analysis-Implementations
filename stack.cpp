#include <iostream>
#define MAX 100 //this is max stack size

class Stack {
private:
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            std::cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return -1;
        } else {
            return arr[top--];
        }
    }

    int peek() {
        if (top < 0) {
            std::cout << "Stack is Empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};
