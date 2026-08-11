#include <vector>
#include <iostream>
using namespace std;

pair<int, int> findMaxElement(vector<int> &arr)
{
    int maxElement = arr[0];
    int minElement = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
        }
        else if (minElement > arr[i])
        {
            minElement = arr[i];
        }
    }

    return {maxElement, minElement};
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
    cout << result.first << endl;
    cout << result.second << endl;
}