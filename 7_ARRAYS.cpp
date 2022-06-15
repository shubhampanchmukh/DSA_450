#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int a[],int n)
    {
        int b[n];
    b[0]=a[n-1];
    for(int i=1;i<n;i++){
        
        b[i]=a[i-1];

    }
    for(int i=0;i<n;i++){ 
        cout<<b[i];
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotate(a,n);
}