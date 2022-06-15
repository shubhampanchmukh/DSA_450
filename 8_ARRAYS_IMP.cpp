//-------kadanes algorithm--------//
//most optimized O(n)
#include<bits/stdc++.h>
using namespace std;

long sum_sub_array(int a[],int n){
    int mi=INT_MIN;
    int max_till_here =0;

    for(int i=0;i<n;i++){
        max_till_here = max_till_here +a[i];
        if(max_till_here>mi){
            mi=max_till_here;
        }
        if(max_till_here<0){
            max_till_here=0;
        }
    }
        cout<<mi;
    

}

int main(){
    int n;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sum_sub_array(a,n);
}