#include <iostream>
#include <string>

using namespace std;

class Solution
{

public:
    pair<int, int> count(string &s)
    {
        int upper = 0, lower = 0;
        if (s.size() == 0)
        {
            return {0, 0};
        }
        else
        {

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] <= 'Z' && s[i] >= 'A')
                {
                    upper += 1;
                }
                else if (s[i] <= 'z' && s[i] >= 'a')
                {
                    lower += 1;
                }
            }
        }
        return {upper, lower};
    }
};

int main()
{
    Solution obj;
    string str;
    getline(cin, str);
    auto [up, low] = obj.count(str);
    cout << up << '\n'
         << low;
    return 0;
}