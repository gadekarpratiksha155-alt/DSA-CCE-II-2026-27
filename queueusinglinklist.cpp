#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int value)
    {
        Node* newNode = new Node(value);

        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "\nInserted: " << value;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "\nQueue is Empty";
            return;
        }

        Node* temp = front;
        cout << "\nDeleted: " << front->data;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "\nQueue is Empty";
            return;
        }

        Node* temp = front;
        cout << "\nQueue elements: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.dequeue();
    q.display();

    return 0;
}

/*d:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ queueusingarrary.cpp -o queueusingarrary && "d:\pratikshagadekar204\"queueusingarrary

Queue elements: 25      57      25      82      99
Removed: 25
Queue elements: 57      25      82      99
Front element is: 57
d:\pratikshagadekar204>
*/
