#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int a[], int n, int k)
{
    unordered_map<int,int> m;
    int ans=0;
    for(int i=0;i<n;i++){
        int b=k-a[i];
        if(m[b]){
            ans+=m[b];
        }
        m[a[i]]++;
    }
    return ans;

}


//Bruteforce method

// int getPairsCount(int a[], int n, int k)
// {
//     int x, count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             x = a[i] + a[j];
//             if (x == k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    getPairsCount(a, n, k);
    cout << "Output: " << getPairsCount(a, n, k);
}