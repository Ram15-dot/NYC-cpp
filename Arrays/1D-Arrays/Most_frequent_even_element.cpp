#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        int max_freq = 0;
        int ans = -1;

        for (int num : nums)
        {
            if (num % 2 == 0)
            {
                freq[num]++;

                if (freq[num] > max_freq)
                {
                    max_freq = freq[num];
                    ans = num;
                }
                else if (freq[num] == max_freq)
                {
                    if (ans == -1 || num < ans)
                    {
                        ans = num;
                    }
                }
            }
        }

        return ans;
    }
};