//After this code checkout the most optimized code below by striver

#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int n,m; 
    	cin >> n>>m;
    	int a1[n],a2[m];
    	for(int i = 0; i < n; i++)
    		{cin>>a1[i];}
          
    	for(int i = 0; i < m; i++)
    		{cin>>a2[i];}

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            v.push_back(a2[i]);
        }
        sort(v.begin(),v.end());
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        cout<<"The median is "<<find_median(v);
        
return 0;
}




//Below code is from question is from leet code and its asking -> median of two unequal sorted arrays


// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2, nums1);
//         int n1 = nums1.size();
//         int n2 = nums2.size(); 
//         int low = 0, high = n1;
        
//         while(low <= high) {
//             int cut1 = (low+high) >> 1;
//             int cut2 = (n1 + n2 + 1) / 2 - cut1; 
            
        
//             int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
//             int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1]; 
            
//             int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
//             int right2 = cut2 == n2 ? INT_MAX : nums2[cut2]; 
            
            
//             if(left1 <= right2 && left2 <= right1) {
//                 if( (n1 + n2) % 2 == 0 ) 
//                     return (max(left1, left2) + min(right1, right2)) / 2.0; 
//                 else 
//                     return max(left1, left2); 
//             }
//             else if(left1 > right2) {
//                 high = cut1 - 1; 
//             }
//             else {
//                 low = cut1 + 1; 
//             }
//         }
//         return 0.0; }