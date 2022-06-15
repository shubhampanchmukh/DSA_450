#include<iostream>
using namespace std;

int maxProfit(int a[],int n){
    int buy=0,sell=0,j;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            buy=a[i];
               j=i;
            break;
        }
    }
 
     cout<<"Buy at: "<<buy;
     for(int i=j;i<n-1;i++){
         if(a[i]>buy)
         {
             if(a[i+1]>a[i]){
                 sell=a[i+1];
                 break;
             }
         }
         else{
             sell=0;
         }
     }
     if(buy==0){
         sell=0;
     }
       cout<<"\nSell at: "<<sell;

       cout<<"\nProfit is "<<sell-buy;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     maxProfit( a,n);


}