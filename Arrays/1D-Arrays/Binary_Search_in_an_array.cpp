#include <iostream>
using namespace std;
// function is the solution that is required to submit but i also included main function so you can run it on your own machine :-)
int searchTarget(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid = (n) / 2;
    if (target > arr[n - 1])
    {
        return -1;
    }
    else
    {
        while (1)
        {
            //uncomment this to check how the function works
            // cout << "Running :" << " | Mid = " << mid << " | Target = " << target << " | arr[mid] = " << arr[mid] << endl;
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                high = mid - 1;
                mid = ((high + low) / 2);
            }
            else
            {
                low = mid + 1;
                mid = ((high + low) / 2);
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    int n, target;

    while (t--)
    {
        cin >> n >> target;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        cout << searchTarget(arr, n, target) << endl;
    }
    return 0;
}