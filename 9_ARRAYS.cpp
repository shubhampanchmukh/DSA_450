#include <bits/stdc++.h>
using namespace std;

void getMinDiff(int a[], int n, int k)
{
    sort(a, a + n);
    int ans = a[n - 1] - a[0];
    int small = a[0] + k;
    int large = a[n - 1] - k;
    int mini, maxi;
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] >= k)
        {
            mini = min(a[i] - k, small);
            maxi = max(a[i - 1] + k, large);
            ans = min(ans, maxi - mini);
        }
        else
            continue;
    }
    cout<<ans;
}
int main()
{
    int n, k;
    cin >> k >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    getMinDiff(a, n, k);
    
}