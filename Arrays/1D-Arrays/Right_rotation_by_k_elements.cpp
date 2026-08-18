#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void rightRotate(vector<int> &arr, int k)
    {
        int diff;
        vector<int> arr2 = arr;

        for (int i = 0; i < arr.size(); i++)
        {
            if (k > arr.size())
            {
                k = k - arr.size();
            }
            if (i < k)
            {
                arr[i] = arr2[arr.size() - k + i];
            }
            else
            {
                arr[i] = arr2[i - k];
            }
        }
    }
};
int main()
{
    Solution obj;
    int t;
    cout << "Enter no of test cases :";
    cin >> t;

    while (t--)
    {
        int n;
        cout << endl
             << "Enter no. of elements :";
        cin >> n;
        int k;
        cout << endl
             << "Enter the value of rotation :";
        cin >> k;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cout << "\n"
                 << "Enter elements for the index arr[" << i << "]";
            cin >> temp;
            arr.push_back(temp);
        }

        obj.rightRotate(arr, k);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
        }
    }
}