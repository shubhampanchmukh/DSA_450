//kadanes algorithm
//same as Q8
#include<iostream>
using namespace std;

long sum_sub_array(int a[],int n){
     int b[n];
    //  int max;
     b[0]=a[0];
     for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        b[i]=a[i];
        
     }
     cout<<"Contiguos sub-array: ";
     for(int i=0;i<n;i++){
         cout<<b[i]<<" ";
     }
     cout<<"\nMax subarray sum is: ";
      int max = b[0];
      for (int i = 1; i < n; i++){
        if (b[i] > max)
            {max = b[i];}
      }
        
        cout<<max;
    

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