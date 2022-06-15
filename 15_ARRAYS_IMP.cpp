/*
Steps for below soln:  //TUF SOLn
for eg: 1 3 5 4 2 ->1 4 2 3 5
1)  a[i]<a[i+1]  ind1=1
2)  a[ind 2] > a[ind 1] ind2=3
3)  swap(a[ind 1], a[ind2])
4)  reverse(ind1 + 1 -> last) 

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//at last one code is written for better understanding
void nextPermutation(vector<int> &nums)
{
    int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--)//here n-2 is taken because when we do in loop k+1 we should always take n-2 else we will get an error
    {
        if (nums[k+1] > nums[k])//nums[2]>nums[1] so k=1 is ans here 
        {
            break;
        }
    }
    if (k < 0)//if no breakpoint
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])//4>3 i.e nums[3]>nums[1]
            {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " "; 
}
int main()
{
    int n, a;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }

    nextPermutation(nums);

    return 0;
}

//-------Shortcut for permutation of array---------

// C++ program to display all permutations
// of an array using STL in C++

// #include <bits/stdc++.h>
// using namespace std;

// // Function to display the array
// void display(int a[], int n)
// {
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << "  ";
//     }
//     cout << endl;
// }

// // Function to find the permutations
// void findPermutations(int a[], int n)
// {

//     // Sort the given array
//     sort(a, a + n);

//     // Find all possible permutations
//     cout << "Possible permutations are:\n";
//     do {
//         display(a, n);
//     } while (next_permutation(a, a + n));
// }

// // Driver code
// int main()
// {

//     int a[] = { 10, 20, 30, 40 };

//     int n = sizeof(a) / sizeof(a[0]);

//     findPermutations(a, n);

//     return 0;
// }


//code from comments of TUF

// C++ Code, with comments
//  void nextPermutation(vector<int>& nums) {
//         int breakPoint=-1;
        
//         //find a breakpoint
//         for(int i=nums.size()-2;i>=0;i--){
//             if(nums[i+1]>nums[i]){
//                 breakPoint=i;
//                 break;
//             }
//         }
//         // if no breakpoint
//         if(breakPoint<0){
//             reverse(nums.begin(),nums.end());
//             return;
//         }
//         // find suitable replacement of breakpoint and swap
//         for(int i=nums.size()-1;i>=breakPoint;i--){
//             if(nums[i]>nums[breakPoint]){
//                 swap(nums[breakPoint],nums[i]);
//                 reverse(nums.begin() + breakPoint + 1, nums.end()); // reverse all next elem
//                 break; // finally break and return
//             }
//         }
        
//     }
