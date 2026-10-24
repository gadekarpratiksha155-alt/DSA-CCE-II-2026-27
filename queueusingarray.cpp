#include <iostream>
using namespace std;

#define MAX 5

class Queue
{
    int q[MAX];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == MAX - 1)
        {
            cout << "\nQueue is Full";
            return;
        }

        if (front == -1)
            front = 0;

        q[++rear] = x;
        cout << "\nInserted: " << x;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "\nQueue is Empty";
            return;
        }

        cout << "\nDeleted: " << q[front];
        front++;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "\nQueue is Empty";
            return;
        }

        cout << "\nQueue elements: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();
    q.dequeue();
    q.display();

    return 0;
}

D:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ Stackusinglinkelist.cpp -o Stackusinglinkelist && "d:\pratikshagadekar204\"Stackusinglinkelist

Stack elements:
220
100
578
333
810
990

Removed: 220
Stack elements:
100
578
333
810
990

Top element is: 100
