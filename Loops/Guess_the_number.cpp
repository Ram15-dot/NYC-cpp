#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int guessNumber(int n, int (*guess)(int))
    {
        // Write Your Code Here
        int low = 1;
        int high = n;
        int mid = (n) / 2;

        while (true)
        {

            int result = guess(mid);

            if (result == 0)
            {
                return mid;
                break;
            }
            else if (result == 1)
            {
                low = mid + 1;
                mid = (low + high) / 2;
            }
            else
            {
                high = mid - 1;
                mid = (low + high) / 2;
            }
        }
    }
};