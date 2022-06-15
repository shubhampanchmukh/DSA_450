#include<iostream>
using namespace std;

int main(){
    int n,x=1;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        // n=n*(n-i);
        x=x*(i+1);
    }
    cout<<x;
    
}