#include <bits/stdc++.h>
using namespace std;

// Here first code is from google working fine
// And second written by me which runs only for some cases
int maxtwobuysell(int arr[], int size)
{
    int first_buy = INT_MIN;
    int first_sell = 0;
    int second_buy = INT_MIN;
    int second_sell = 0;

    for (int i = 0; i < size; i++)
    {

        first_buy = max(first_buy, -arr[i]); // we set prices to negative, so the calculation of profit will be convenient
        first_sell = max(first_sell, first_buy + arr[i]);
        second_buy = max(second_buy, first_sell - arr[i]); // we can buy the second only after first is sold
        second_sell = max(second_sell, second_buy + arr[i]);
    }
    return second_sell;
}

int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << maxtwobuysell(arr, size);
    return 0;
}

// int main(){
//     int n,x,y,z;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
//     int buy=0,sell=0,profit1,profit2,profit;

//     for (int i = 1; i < n; i++)
//     {
//         if(a[i]>a[i-1]){
//             buy=a[i-1];
//             x=i-1;
//             break;
//         }
//     }
//     for (int i = x; i < n; i++)
//     {
//         //i=0
//         if(a[i]<a[i+1] && buy!=0){
//             sell=a[i+1];
//             y=i+1;
//             break;
//         }
//     }
//     profit1=sell-buy;
//     cout<<"Profit1: "<<profit1;
//     for (int i = y+1; i < n; i++)
//     {
//         //i=2
//         if(a[i]>a[i-1]){
//             buy=a[i-1];
//             z=i-1;
//             break;
//         }
//     }
//     for (int i = z; i < n; i++)
//     {
//         if(a[i]<a[i+1] && buy!=0){
//             sell=a[i+1];
//             y=i+1;
//         }
//     }
//     profit2=sell-buy;
//     cout<<"\nprofit2: "<<profit2;
//     profit=profit1+profit2;
//     cout<<"\nprofit: "<<profit;
// }
