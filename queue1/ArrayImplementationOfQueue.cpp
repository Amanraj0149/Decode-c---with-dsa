#include<iostream>
using namespace std;

class Queue {
public:
    int f, b;
    int arr[5];
    Queue() {
        f = 0;
        b = 0;
    }
    void push(int val) {
        if (b == 5) {
            cout << "Queue is FULL!" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop() {
        if (f == b) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        f++;
    }
    int front() {
        return arr[f];
    }
    int back() {
        if (f == b) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[b - 1];
    }
    int size() {
        return b - f;
    }
    bool empty() {
        return f == b;
    }
    void display() {
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // This will not be added because the queue is full
    q.display();
    q.pop();
    q.display();
    return 0;
}