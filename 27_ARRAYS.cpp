#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m,count=0;
    cin>>n>>m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
     for (int j = 0; j < m; j++)
    {
        cin>>b[j];
    }
    

    if(n>=m){
    for (int i = 0; i < m; i++)//for b
    {
      for (int j = 0; j < n; j++)//for a
      {
          if(b[i]==a[j]){
              count++;
          }
      }
      
    }
    }
    
    if(n<m){
    for (int i = 0; i < n; i++)//for b
    {
      for (int j = 0; j < m; j++)//for a
      {
          if(b[i]==a[j]){
              count++;
          }
      }
      
    }
    }
    if(count==m){
        cout<<"YES!";
    }
    else{
        cout<<"NO!";
    }
    
    
return 0;
}