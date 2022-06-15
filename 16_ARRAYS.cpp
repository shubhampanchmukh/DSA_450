#include "bits/stdc++.h"
using namespace std;
long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;//imp step this means a[i],a[i+1],a[i+2].. this all after i should be gretaer than b[j] so tats y count this also 
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}
long long mergeSort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mergeSort(arr, 0, n - 1);
    return 0;
}

// This below code gives runtime error

// #include<iostream>
// #include<algorithm>

// using namespace std;

// void count_inversions(int a[], int n){
//     int count=0;
//     int temp=0;

//     for(int i=0;i<n-1;i++){
//         for (int j = i + 1; j < n; j++){
//             if (a[i] > a[j])
//                 count++;
//         }

//     }

//     cout<<"\nCount: "<<count;

// }

// int main()
// {
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    count_inversions(a,n);

// }