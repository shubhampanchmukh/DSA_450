#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k,x=0;
    cout<<"Enter the size of array: \n";
    cin>>n;
    // int a[n];
    // int size_array=sizeof(a)/sizeof(a[0]);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // };

    std::vector<int> a;
    for(int i=0;i<n;i++){
       cin>>x;
       a.push_back(x);
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    sort(a.begin(), a.end());
   
    

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    cout<<"Enter the Kth Element: \n";
    cin>>k;
    if(k<=n){
        cout<<k<<" smallest element in the given array is : "<<a[k-1];
        
    }
    


};