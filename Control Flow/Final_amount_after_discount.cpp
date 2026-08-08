#include <iostream>
using namespace std;
int main()
{
    int input;
    float bill = 0;
    cin >> input;
    if (input < 1000)
    {
        bill = input;
    }
    else if (input <= 4999)
    {
        bill = (input - input * 0.1f);
    }
    else if (input < 9999)
    {
        bill = (input - input * 0.2f);
    }

    else
    {
        bill = (input - input * 0.3f);
    }

    cout << bill;
    return 0;
}