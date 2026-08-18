#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string checkNumber(int num)
    {
        if (num > 0)
            return "Positive";
        else if (num < 0)
            return "Negative";
        return "Zero";
    }
};

int main()
{
    Solution obj;
    int num;
    cin >> num;
    cout << obj.checkNumber(num);
}