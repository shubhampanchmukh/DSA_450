#include <iostream>

using namespace std;

void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
};

void reverse_array(int a[], int start, int end)
{
    int count = 0;
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;

        end--;
    }
};

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    print_array(a, n);
    cout << "reversed array is" << endl;
    reverse_array(a, 0, n - 1);
    print_array(a, n);
}