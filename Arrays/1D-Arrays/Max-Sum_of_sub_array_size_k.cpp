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
    int sum = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < k; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}