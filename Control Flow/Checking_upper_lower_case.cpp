#include <iostream>
using namespace std;
int main()
{
    // Upper case 65 to 90
    char input;
    cin >> input;
    if (65 <= input && input <= 90)
    {
        cout << "Uppercase";
    }
    else
    {
        cout << "Lowercase";
    }

    return 0;
}