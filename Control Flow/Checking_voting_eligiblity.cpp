#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not Eligible";
    }
    else
    {
        cout << "Eligible";
    }

    return 0;
}