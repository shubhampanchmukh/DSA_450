#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n, m;
    int count = 0;
    cout << "Enter size of 2 arrays: \n";
    cin >> n >> m;
    int a[n];
    int b[m];
    unordered_map<int, int> map;
    cout << "Enter the elements of Array 1: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        map[a[i]++];
    }
    cout << "Enter the elements of Array 2: \n";   
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        map[b[i]++];
    }
    cout << "After examing Union of 2 Arrays Count is: " << map.size();
    return 0;
}