#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        arr2[j] = arr[j + 1];
    }
    arr2[n - 1] = arr[0];
    for (int i : arr2)
    {
        cout << i << " ";
    }

    return 0;
}