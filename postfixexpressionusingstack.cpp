#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

class Stack
{
private:
    int arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if (top == 99)
        {
            cout << "Stack Overflow";
            return;
        }

        top++;
        arr[top] = val;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return 0;
        }

        int p = arr[top];
        top--;
        return p;
    }
};

int evaluate(char x, int op1, int op2)
{
    switch (x)
    {
        case '+':
            return op1 + op2;

        case '-':
            return op1 - op2;

        case '*':
            return op1 * op2;

        case '/':
            if (op2 == 0)
            {
                cout << "Error: Division by zero";
                return 0;
            }
            return op1 / op2;

        case '%':
            if (op2 == 0)
            {
                cout << "Error: Division by zero";
                return 0;
            }
            return op1 % op2;

        case '$':
            return (int)pow(op1, op2);

        default:
            cout << "Invalid operator";
            return 0;
    }
}

int main()
{
    Stack s;

    char x;
    int op1, op2, val;

    cout << "Enter postfix expression: ";

    while ((x = getchar()) != '\n')
    {
        if (isdigit(x))
        {
            s.push(x - '0');
        }
        else if (x == ' ')
        {
            continue;
        }
        else
        {
            op2 = s.pop();
            op1 = s.pop();

            val = evaluate(x, op1, op2);

            s.push(val);
        }
    }

    val = s.pop();

    cout << "Answer = " << val << endl;

    return 0;
}
/*Microsoft Windows [Version 10.0.26200.9457]
(c) Microsoft Corporation. All rights reserved.

d:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ postfixexpressionusingstack.cpp -o postfixexpressionusingstack && "d:\pratikshagadekar204\"postfixexpressionusingstack
Enter postfix expression: 326+-283/+*2$2+
Answer = 401
*/