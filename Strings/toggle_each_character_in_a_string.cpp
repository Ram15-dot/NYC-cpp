#include <iostream>
#include <string>

using namespace std;

class solution
{
private:
public:
    void toggle(string &s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 'Z')
            {
                s[i] = tolower(s[i]);
            }
            else
            {
                s[i] = toupper(s[i]);
            }
        }
    }
};

int main()
{
    solution character;
    string s;
    getline(cin, s);
    character.toggle(s);
    cout << s;
    return 0;
}