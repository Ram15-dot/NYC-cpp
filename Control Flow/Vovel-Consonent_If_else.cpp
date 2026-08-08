#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if (input == 'a' || input == 'e' || input == 'i' ||
        input == 'o' || input == 'u' ||
        input == 'A' || input == 'E' || input == 'I' ||
        input == 'O' || input == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    return 0;
}