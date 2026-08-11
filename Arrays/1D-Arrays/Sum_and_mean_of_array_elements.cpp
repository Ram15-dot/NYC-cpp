#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int inp[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    for (int i : inp)
    {
        sum += i;
    }

    double mean = 1.0 * sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Mean: " << fixed << setprecision(1) << mean;
    return 0;
}