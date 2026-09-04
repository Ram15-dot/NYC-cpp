
#include <iostream>
#include <string>
#include <tuple>
#include <cstring>

using namespace std;

class solution
{

public:
    tuple<int, int, int> count(string &str)
    {
        int vowel = 0;
        int consonent = 0;
        int spc = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel++;
            }
            else if (str[i] == ' ')
            {
                spc++;
            }
            else
            {
                consonent++;
            }
        }
        return {vowel, consonent, spc};
    }
};

int main()
{
    solution calculate;
    int t;
    cin >> t;
    cin.ignore();
    string str;

    while (t--)
    {
        getline(cin, str);
        calculate.count(str);
        auto [vowel, consonent, spc] = calculate.count(str);
        // output
        cout << "Vowels: " << vowel << endl;
        cout << "Consonants: " << consonent << endl;
        cout << "Spaces: " << spc << endl;
    }

    return 0;
}