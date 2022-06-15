
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int good=0,bad=0;
        //counting good values
        for (int i = 0; i < n; i++)
        {
           if(arr[i]<=k){
               good++;
           }
            
        }
        //counting bad values
        for (int i = 0; i < good; i++)
        {
           if(arr[i]>k){
               bad++;
           }
            
        }

        int i=0,j=good,ans=bad;
        while(j<n){
            //if the start of the window was the bad value reduce bad count by 1
            if(arr[i]>k)
            bad--;
            //if the end of window the bad value increasw bad count by 1
            if(arr[j]>k)
            bad++;
            //update ans
            ans=min(ans,bad);
            i++;j++;//move window by 1
        }
        return ans;
        
    }
};

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends