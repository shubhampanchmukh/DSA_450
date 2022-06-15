#include<bits/stdc++.h>
using namespace std;

int  maxProduct(int *a,int n){
    
    int minVal = a[0];
    int maxVal =a[0];
    int maxProduct =a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i]<0)
        swap(maxVal,minVal);

        maxVal = max(a[i], maxVal * a[i]);
        minVal = min(a[i], minVal * a[i]);

        maxProduct =max(maxProduct, maxVal);
    }
    return maxProduct;
    

}
int main(){
    int n=5;
    // cin>>n;
    int a[]={6,-3,-10,0,2};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    maxProduct(a,n);
    cout<<maxProduct(a,n);
}
