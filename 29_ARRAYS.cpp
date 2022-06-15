#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, y = 0;
    cin >> n;
    int a[n], l[n], r[n], ma, mi;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ma = l[0] = a[0];
    mi = r[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > ma)
            ma = a[i];
        l[i] = ma;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > mi)
            mi = a[i];
        r[i] = mi;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += min(l[i], r[i]) - a[i];
    }

    cout << s;

    return 0;
}

