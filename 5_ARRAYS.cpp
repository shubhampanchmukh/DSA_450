#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // solver(a,0,n-1);

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            if (a[start] < 0)
            {
                start++;
            }
            else if (a[end] > 0)
            {
                end--;
            }
            else
            {
                swap(a[start], a[end]);
            }
        }
    }
    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}