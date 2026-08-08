#include <iostream>
using namespace std;

int factorial(int var)
{
    if (var > 1)
    {
        return var * factorial(var - 1);
    }
    return 1;
}

int main()
{
    int inp;
    cin >> inp;
    cout<< factorial(inp);
    return 0;
}