#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    long long n, num;
    cin >> n;
    num = n;
    if (n > 0)
    {
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
    }
    else
    {
        num = num * (-1);
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
    }

    cout << sum;
    return 0;
}