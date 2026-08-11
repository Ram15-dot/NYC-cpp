#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string check(long long arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {

            if (arr[i - 1] > arr[i])
            {
                return "NO";
            }
        }

        return "YES";
    }
};

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    string result = obj.check(arr, n);
    cout << result;
    return 0;
}