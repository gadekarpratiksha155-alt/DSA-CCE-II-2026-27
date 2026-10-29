#include <iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-1; j++)
    {
        if (a[j]>a[j+1])
        {
        int temp = a[j];
        a[j] = a[j+1];   
        }
    }
}
int main(){
    int n;
    int a[10];
    cout<<"Enter the size of the array:";
    cin>> n;
    cout << "Enter"<< n << "integers in any order:"<< endl;
    for(int i = 0;i<n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n);
    cout << "Sorted arrary: ";
    for (int i = 0; i< n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout << endl;
    return 0;
}
/*Microsoft Windows [Version 10.0.26200.8875]
(c) Microsoft Corporation. All rights reserved.

D:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ bubble_sort.cpp -o bubble_sort && "d:\pratikshagadekar204\"bubble_sort
Enter the size of the array:10
Enter10integers in any order:
1 2 3 4 5 6 7 8 9 10
Sorted arrary: 1 2 3 4 5 6 7 8 9 10 

d:\pratikshagadekar204>


*/