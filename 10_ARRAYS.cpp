#include <bits/stdc++.h>
using namespace std; 

int find_min_jumps(int a[], int n)
{
    if (n == 1)
        return 0;

    if(a[0]==0)
        return -1;
    int halt=0,jump=0,maxi=INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        maxi=max(maxi,i+a[i]);

        if(halt==i)
        {
            halt=maxi;
            jump++;

        if(halt>=n-1){
             break;
        }

        }
       
    }
    if(halt>=n-1)
        return jump;
    return -1;
    
    

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << find_min_jumps(a, n);
}

//  if (n == 1)
//         return 0;

//     if (a[0] == 0)
//         return -1;

//     int halt = 0, maxR = INT_MIN, jump = 0;

//     for (int i = 0; i < n - 1; i++)
//     {
//         maxR = max(maxR, i + a[i]);

//         if (i == halt)
//         {
//             halt = maxR;
//             jump++;
//             if (halt >= n - 1)
//                 break;
//         }
//     }

//     if (halt >= n - 1)
//         return jump;
//     return -1;