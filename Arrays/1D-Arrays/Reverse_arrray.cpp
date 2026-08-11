#include <iostream>
using namespace std;
// class Solution
// {
// private:
//     /* data */
// public:
//     int *reverse(long long arr[], int n)
//     {   long long rev[n];
//         for (int i = n - 1; i > 0; i--)
//         {
//         }

//         return rev;
//     }
// };

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    // Solution obj;

    // int result = reverse(arr, n);

    return 0;
}