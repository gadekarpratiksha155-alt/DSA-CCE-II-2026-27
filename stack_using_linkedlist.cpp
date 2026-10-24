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

class Stack
{
    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;

        cout << "\nInserted: " << value;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "\nStack is Empty";
            return;
        }

        Node* temp = top;
        cout << "\nDeleted: " << top->data;
        top = top->next;
        delete temp;
    }

    void display()
    {
        if (top == NULL)
        {
            cout << "\nStack is Empty";
            return;
        }

        Node* temp = top;
        cout << "\nStack elements: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.pop();
    s.display();

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
