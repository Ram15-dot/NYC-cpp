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
    int num, num_copy, sum_of_fact = 0;
    cin >> num;
    num_copy = num;
    while (num_copy > 0)
    {
        int digit = num_copy % 10;
        sum_of_fact += factorial(digit);
        num_copy /= 10;
    }
    if (num == sum_of_fact)
    {
        cout << "Strong Number";
    }
    else{
        cout << "Not a Strong Number";
    }
    return 0;
}