#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int n, int m)
{
    
   int p1=n-1, p2=0;
    while(p1>=0 && p2<m){
        if(a[p1] > b[p2]){
        	swap(a[p1], b[p2]);
        }
        p1--;p2++;
    }
    sort(a, a+n);
    sort(b, b+m);

        for (int j = 0; j < n; j++)
        {
            cout << a[j]<<" ";
        }

        for (int j = 0; j < m; j++)
        {
            cout << b[j]<<" ";
        }
        
    }

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    merge(a, b, n, m);
}