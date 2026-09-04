#include <iostream>
#include <string>
using namespace std;
void replace(string &str, char first, char second)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == first)
        {
            str[i] = second;
        }
    }
}
int main()
{
    string str;
    getline(cin, str);
    char first, second;
    cin >> first >> second;
    replace(str, first, second);
    cout << str;
    return 0;
}