#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n+1;i++){
        if(1<=a[i]<=n){
            cin>>a[i];
        }
    }
    cout<<"Array is: ";
    for(int i=0;i<n+1;i++){  
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<n+1;i++){
        for(int x=1;x<=n;x++)
         {if(a[i]==a[i+x])
        {
            cout<<"\nOUTPUT: "<<a[i];
        }
         }
        // else if(a[i]==a[i+2])
        // {
        //     cout<<"\nOUTPUT: "<<a[i];
        // }
        // else if(a[i]==a[i+3])
        // {
        //     cout<<"\nOUTPUT: "<<a[i];
        // }
        
    }
    return 0;
}