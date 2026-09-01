#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(string &s)
{
    string arr = s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s[i] = arr[s.size() - i - 1];
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        getline(cin, str);
        reverseString(str);
    }

    return 0;
}