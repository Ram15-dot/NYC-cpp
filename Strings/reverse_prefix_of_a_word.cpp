#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class solution
{
public:
    string reversePrefix(string &str, char &input2)
    {
        string str_cpy = str;

        for (int i = 0; i < str.size(); i++)
        {
            if (str_cpy[i] == input2)
            {
                for (int j = i; j >= 0; j--)
                {
                    str[j] = str_cpy[i - j];
                }
                break;
            }
        }
        return str;
    }
};

int main()
{
    solution solve;
    string str;
    char input2;
    cin >> str >> input2;
    cout << solve.reversePrefix(str, input2);
    return 0;
}