#include <iostream>
using namespace std;

int searchTarget(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    int n, target;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> target;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[n];
        }
        cout << searchTarget(arr, n, target) << endl;
    }
    return 0;
}