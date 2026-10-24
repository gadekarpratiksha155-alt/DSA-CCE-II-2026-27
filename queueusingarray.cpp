#include <iostream>
using namespace std;

const int MAX = 5;

class queue
{
private:
    int a[MAX];
    int front;
    int rear;

public:

    // Constructor
    queue()
    {
        front = -1;
        rear = -1;
    }

    // Check whether queue is empty
    int empty(void)
    {
        if (front == -1 && rear == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // Check whether queue is full
    int full(void)
    {
        if (rear == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // Insert element into queue
    void enqueue(int x)
    {
        if (full())
        {
            cout << "\nQueue is full";
            return;
        }

        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }

        a[rear] = x;
    }

    // Remove element from queue
    int dequeue(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        int x = a[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }

        return x;
    }

    // Return front element
    int peek(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        return a[front];
    }

    // Display queue elements
    void display(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\nQueue elements:";

        for (int i = front; i <= rear; i++)
        {
            cout << "\t" << a[i];
        }
    }
};

int main()
{
    int x;
    queue q;

    q.enqueue(25);
    q.enqueue(57);
    q.enqueue(25);
    q.enqueue(82);
    q.enqueue(99);

    q.display();

    if (!q.empty())
    {
        x = q.dequeue();
        cout << "\nRemoved: " << x;
    }

    q.display();

    x = q.peek();
    cout << "\nFront element is: " << x;

    return 0;
}
/*d:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ queueusingarrary.cpp -o queueusingarrary && "d:\pratikshagadekar204\"queueusingarrary

Queue elements: 25      57      25      82      99
Removed: 25
Queue elements: 57      25      82      99
Front element is: 57
d:\pratikshagadekar204>
*/
