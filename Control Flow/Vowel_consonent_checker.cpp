#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    switch (input)
    {
    case 'a':
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U':
        cout << "Vowel" << "\n";
        break;

    default:
        cout << "Consonant" << "\n";
        break;
    }
    return 0;
}