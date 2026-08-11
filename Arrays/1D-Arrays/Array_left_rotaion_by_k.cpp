#include <iostream>
using namespace std;

// auto rotate(long long arr[], int n, int k)
// {
//     long long arr2[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int j = 0; j < n - k; j++)
//     {
//         arr2[j] = arr[j + (n - k) - 1];
//     }

//     arr2[(n - k) - 1] = arr[0];
//     return arr2;
// }

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    long long arr[n];
    // long long *result = rotate(arr, n, k);
    // cout << result;
    long long arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (k < n)
    {
        for (int j = 0; j < n - k; j++)
        {
            arr2[j] = arr[k + j];
        }

        for (int r = (n - k); r < n; r++)
        {
            arr2[r] = arr[r - (n - k)];
        }
    }
    else
    {
        k = k-n;
        for (int j = 0; j < n - k; j++)
        {
            arr2[j] = arr[k + j];
        }

        for (int r = (n - k); r < n; r++)
        {
            arr2[r] = arr[r - (n - k)];
        }
    }
    for (int l : arr2)
    {
        cout << l << " ";
    }

    return 0;
}