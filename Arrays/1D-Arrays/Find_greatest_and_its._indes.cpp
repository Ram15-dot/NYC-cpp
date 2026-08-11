#include <vector>
#include <iostream>
using namespace std;

pair<int, int> findMaxElement(vector<int> &arr)
{
    int maxElement = arr[0];
    int location = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
            location = i;
        }
    }

    return {maxElement, location};
}
int main()
{
    int n;
    cin >> n;
    vector<int> inp;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        inp.push_back(temp);
    }

    pair<int, int> result = findMaxElement(inp);
    cout << "Max element = " << result.first << " found at index " << result.second;
}