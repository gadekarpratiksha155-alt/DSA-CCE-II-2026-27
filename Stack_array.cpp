
#include <iostream>
using namespace std;

const int MAX = 5;

class Stack
{
private:
    int a[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        top++;
        a[top] = x;
    }

    int pop(void)
    {
        int x = a[top];
        top--;
        return x;
    }

    int peek(void)
    {
        return a[top];
    }

    int full(void)
    {
        if (top == MAX - 1)
            return 1;
        else
            return 0;
    }

    int empty(void)
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    void display(void)
    {
        for (int i = top; i >= 0; i--)
            cout << endl << a[i];
    }
};

int main()
{
    int x;
    Stack s;

    if (!s.full()) s.push(12);
    if (!s.full()) s.push(34);
    if (!s.full()) s.push(56);
    if (!s.full()) s.push(87);
    if (!s.full()) s.push(92);
    if (!s.full()) s.push(99);

    cout << "Stack elements:";
    s.display();

    if (!s.empty())
    {
        x = s.pop();
        cout << endl << "Removed: " << x;
    }


    

    cout << endl << "Stack after pop:";
    s.display();

    if (!s.empty())
    {
        x = s.peek();
        cout << endl << "Top element is: " << x;
    }

    return 0;
}

D:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ stackusingarray.cpp -o stackusingarray && "d:\pratikshagadekar204\"stackusingarray

Stack elements:
92
87
56
34
12

Popped element: 92

Stack after pop:
Stack elements:
87
56
34
12

Top element is: 87
