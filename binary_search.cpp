#include <iostream>
using namespace std;

int binary_search(int a[], int n, int x) 
{
    int first = 0;
    int last = n - 1;
    int mid;

    while (first <= last) 
    {
        mid = (first + last) / 2;

        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x) 
        {
            first = mid + 1;
        }
        else 
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    int a[20];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " sorted integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the target element to search for: ";
    cin >> x;

    int position = binary_search(a, n, x);

    if (position != -1)
        cout << "Element found at position: " << position << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
/*Microsoft Windows [Version 10.0.26200.8875]
(c) Microsoft Corporation. All rights reserved.
d:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ binary_search.cpp -o binary_search && "d:\pratikshagadekar204\"binary_search
Enter the size of the array: 10
Enter 10 sorted integers:
10 20 30 40 50 60 70 80 90 100
Enter the target element to search for: 60
Element found at position: 5

d:\pratikshagadekar204>s
*/