#include <iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
    }
}
int main() {

    int n;
    int a[20];
    cout<<"Enter the size of the array:";
    cin>> n;
    cout<<"Enter"<<n<<"integers:"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout<<"Enter the target element to search for:";
    cin >> x;

    int location = linear_search(a, n, x);
    if (location != -1) {
        cout << "Element" << x << " found at index: "<<location<< endl;
    } else {
        cout << "Element " << x << " not found in array ."<< endl;
    }
    return 0;
    
}
/*Microsoft Windows [Version 10.0.26200.8875]
(c) Microsoft Corporation. All rights reserved.
d:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ linear_search.cpp -o linear_search && "d:\pratikshagadekar204\"linear_search
Enter the size of the array: 6
Enter6integers:
6 8 9 5 3 4 
Enter the target element to search for:4
Element4 found at index: 5

d:\pratikshagadekar204>
*/
