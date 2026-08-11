#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, index;
    cin >> n;
    vector<long long> arr;
    long long secondGreat;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    secondGreat = arr[arr.size() - 2];
    cout << "Second greatest element = " << secondGreat;
    return 0;
}