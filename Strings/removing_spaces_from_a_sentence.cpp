#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{

public:
    void count(string &s)
    {

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                s.erase(remove(s.begin(), s.end(), ' '), s.end());
            }
        }
    }
};

int main()
{
    Solution obj;
    string str;
    getline(cin, str);
    obj.count(str);
    cout << str;
    return 0;
}