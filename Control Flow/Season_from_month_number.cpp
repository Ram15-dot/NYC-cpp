#include <iostream>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    if (inp == 1 || inp == 2 || inp == 12)
    {
        cout << "Winter";
    }
    else if (inp == 3 || inp == 4 || inp == 5)
    {
        cout << "Spring";
    }
    else if (inp == 6 || inp == 7 || inp == 8)
    {
        cout << "Summer";
    }
    else if (inp == 9 || inp == 10 || inp == 11)
    {
        cout << "Autumn";
    }
    else
    {
        cout << "Invalid Month";
    }

    return 0;
}