#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int repeat(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        for (int num : arr)
        {
            freq[num] += 1;
        }
        for (int num : arr)
        {
            if (freq[num] > 1)
            {
                return num;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> arr;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    if (obj.repeat(arr) == -1)
    {
        cout << -1;
    }
    else
    {
        cout << obj.repeat(arr);
    }
    return 0;
}