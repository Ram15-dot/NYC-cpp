#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<long long> arr;
    int sum, maxSum = 0;
    // core logic
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    maxSum = arr[0];
    for (int i = 0; i < n - k + 1; i++)
    {
        sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
    return 0;
}