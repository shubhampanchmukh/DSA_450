#include<bits/stdc++.h>

using namespace std;
void solver(int a[],int n){

    int i=0,j=n-1;

    while(i<j){
        while(i<=n-1 and a[i]>0)
        i+=1;
        while(j>=0 and a[j]<0)
        j-=1;
        if(i<j)
        swap(a[i],a[j]);
    }
    //1234-4-1
    //after this i has arrived till -4
    if(i==0 || i==n)
    return;

    int k=0;
    while(k<n && i<n)
    {
        swap(a[k],a[i]);
        i=i+1;
        k=k+2;
    }
    
}
void printArray(int a[],int n){
    cout<<"\nAfter: \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    solver(a,n);
    printArray(a,n);
    return 0;
}
