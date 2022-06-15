#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            if (a[i] + a[l] + a[r] == k)
            {
                ans = 1;
                break;
            }
            else if (a[i] + a[l] + a[r] < k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if(ans==1)
        break;
        
    }
    cout<<ans;
    
}

// int main(){
//     int n=6,k=13,y;
//     int a[]={1,4,45,6,10,8};

//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 1; j<n; j++)
//        {
//            y=a[i]+a[j]+a[j-1];
//            if(y==k){
//                cout<<y<<"\nTRue";
//                break;
//            }
//        }

//     }

// return 0;
// }