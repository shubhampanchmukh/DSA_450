// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
            int y=v.size();
            if(y%2==0){
                int x=(y/2)-1;
                int p=x+1;
                return (v[x]+v[p])/2;
            }
            else if(y%2!=0){
                int z=((y+1)/2)-1;
                return v[z];
            }
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends