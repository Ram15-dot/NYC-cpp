#include <iostream>
using namespace std;

class Solution
{
public:
    void solve(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
    }
};
int main()
{
    Solution obj;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    obj.solve(arr, n);
    return 0;
}