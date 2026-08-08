#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int num, sum = 0;
    cin >> num;
    int inp = num;
    int NumberOfDigits = to_string(num).size();

    while (num > 0)
    {
        int digit = 0;
        digit = num % 10;
        
        sum += pow(digit , NumberOfDigits);

        num /= 10;
    }

    if (sum == inp)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    
    return 0;
}