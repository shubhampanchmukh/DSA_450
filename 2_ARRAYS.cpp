#include <iostream>
using namespace std;

void find_min_max()
{

    int min, max, n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        min = a[0];
        max = a[0];
    }
    else
    {
        if (a[0] > a[1])
        {
            min = a[1];
            max = a[0];
        }
        else
        {
            min = a[0];
            max = a[1];
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
    }
    cout << "minimum valus is " << min << "\n";
    cout << "maximum value is " << max;
}

int main()
{

    find_min_max();
}