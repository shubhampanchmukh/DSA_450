#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
    {
        vector<int> v;
        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a[i] == b[j] && b[j] == c[k])
            {
                v.push_back(a[i]);
                i++;
                j++;
                k++;
            }
            else if (a[i] < b[j])
            {
                i++;
            }
            else if (b[j] < c[k])
                j++;
            else
                k++;
            int x = a[i - 1];// this below code is to  take care of the duplicates
            while (a[i] == x)
                i++;
            int y = b[j - 1];
            while (b[j] == y)
                j++;
            int z = c[k - 1];
            while (c[k] == z)
                k++;
        }
        if (v.size() == 0)
            return {-1};
        return v;
    }
};
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cin >> a[i];
    }
    Solution ob;
    vector<int> res = ob.commonElements(a, b, c, n1, n2, n3);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
