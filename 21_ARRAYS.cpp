#include<bits/stdc++.h>
using namespace std;

int solver(int a[],int n){
    int f=0;
    for (int i = 0; i < n; i++)
    { int x=0;
        for (int j = i; j < n; j++)
        {
            x+=a[j];
            if(x==0 or a[i]==0){
                f=1;
                break;
            }
           
        }
        if(f==1)
        break;   
    }
   if(f==1){
       cout<<"Yes\n";
   }
   else{
       cout<<"No\n";
   }
    
   return 0; 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solver(a,n);

}


//Below code was written while solving....
// int solver(int a[],int n){
//     vector<int> v;
//     cout<<"Hello";
//     for (int i = 0; i <n; i++)
//     {
//         if(a[i]==0){
//             cout<<"\ntrue";
//         }      
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             a[i]+=a[j];
//             v.push_back(a[i]);
//         }
        
//     }
//     cout<<"\na\n";
//     for (int i = 0; i < v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     for (int i = 0; i < n; i++){
//         a[i]+=a[i+1];
//         v.push_back(a[i]);
//     }
//     cout<<"\nb\n";
//     for (int i = 0; i < v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==0 || a[i]==0){
//             cout<<"\ntrue";
//         }
       
        
//     }
    