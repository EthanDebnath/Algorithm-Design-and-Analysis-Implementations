#include <iostream>
#define MAX 100  //Max size of linkedlist

class SinglyLinkedList {
private:
    int arr[MAX];
    int next[MAX];
    int head;
    int freeSpot;

public:
    SinglyLinkedList() {
        head = -1;
        for (int i = 0; i < MAX - 1; i++) {
            next[i] = i + 1;  // Initialize next array to point to the next free index
        }
        next[MAX - 1] = -1;  // No more free spots
        freeSpot = 0;  // Free spot to insert new element
    }

    void insert(int data) {
        if (freeSpot == -1) {
            std::cout << "List Overflow\n";
            return;
        }

        int index = freeSpot;
        freeSpot = next[freeSpot];  // Update free spot to next available index
        arr[index] = data;  // Insert data

        if (head == -1) {
            head = index;
            next[index] = -1;
        } else {
            int temp = head;
            while (next[temp] != -1) {
                temp = next[temp];
            }
            next[temp] = index;
            next[index] = -1;
        }
    }

    void display() {
        if (head == -1) {
            std::cout << "List is Empty\n";
            return;
        }

        int temp = head;
        while (temp != -1) {
            std::cout << arr[temp] << " -> ";
            temp = next[temp];
        }
        std::cout << "NULL\n";
    }
};
