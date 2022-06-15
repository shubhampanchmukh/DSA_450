#include<bits/stdc++.h>
using namespace std;

vector<int> solver(int a[], int n, int k){
     int x=n/k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
         int count=1;
        for (int j = i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
           
        }
         
        if(count>x){
            v.push_back(a[i]);
        }
        
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
   
}

int main(){
    int n=8,k=4;
    int a[]={3,1,2,2,1,2,3,3};
   
   
    solver(a,n,k);
    
    return 0;
    
}