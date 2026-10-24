#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class queue
{
private:
    node *front;
    node *rear;

public:

    // Constructor
    queue()
    {
        front = rear = NULL;
    }

    // Check whether queue is empty
    int empty(void)
    {
        if (front == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // Return front element
    int peek(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        return front->data;
    }

    // Insert element into queue
    void enqueue(int x)
    {
        node *p = new node(x);

        if (front == NULL)
        {
            front = p;
            rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }

    // Delete element from queue
    int dequeue(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        int x = front->data;
        node *p = front;

        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }

        delete p;
        return x;
    }

    // Display queue elements
    void display(void)
    {
        node *q = front;

        cout << "\nQueue elements: ";

        while (q != NULL)
        {
            cout << "\t" << q->data;
            q = q->next;
        }
    }
};

int main()
{
    int x;

    queue q;

    q.enqueue(27);
    q.enqueue(34);
    q.enqueue(42);
    q.enqueue(58);
    q.enqueue(65);
    q.enqueue(70);

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
/*
Microsoft Windows [Version 10.0.26200.8875]
(c) Microsoft Corporation. All rights reserved.

D:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ queueusinglinkedlist.cpp -o queueusinglinkedlist && "d:\pratikshagadekar204\"queueusinglinkedlist

Queue elements:         27      34      42      58      65      70
Removed: 27
Queue elements:         34      42      58      65      70
Front element is: 34
d:\pratikshagadekar204>
*/
    
