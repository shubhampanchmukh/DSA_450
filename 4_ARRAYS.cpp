#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int a[], int n) // Sorts Only for 0,1,2
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }

        else if (a[mid] == 1)
            mid++;
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    int a[n];
    int size_array = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort012(a, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

//     Below code is shortcut for above problem :)
// Sorts any numbers
//     int n,k;
//     cout<<"Enter the size of array: \n";
//     cin>>n;
//     int a[n];
//     int size_array=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     };

//     sort(a, a + size_array);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }