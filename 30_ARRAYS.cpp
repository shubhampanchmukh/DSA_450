#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=8,m=5;
    int a[]={3,4,1,9,56,7,9,12};
    vector<int> v;
    sort(a,a+n);
    //1 3 4 7 9. 9 12 56
    //d -> 9-1 9-3 12-4 56-7
    int min=INT_MAX;

    for (int i = 0; i+m-1 < n; i++)
    {
        int d= a[i+m-1]-a[i];

        if(d<min)
        min=d;
    }
    
    cout<<min<<endl;
    
return 0;
}