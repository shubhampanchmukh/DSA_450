
#include<iostream>
#include<string.h>
using namespace std;


class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for (int i = 0; i < n; i++)
        {
            int num=a[i];
            int reverse=0;

            while(num!=0){
                reverse=(reverse*10) +(num%10);
                num=num/10;
            }
            if(a[i]!=reverse)
            return 0;
        }
        return 1;
        
    }
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends