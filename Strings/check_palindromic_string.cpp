#include <string>
#include <iostream>
#include <cstring>
using namespace std;
int isPalindrome(string &s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int tt;
    cin >> tt;
    
    while (tt--)
    {
        string inp;
        getline(cin, inp);
        if (isPalindrome(inp) == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}