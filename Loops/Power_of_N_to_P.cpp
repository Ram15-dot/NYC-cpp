#include <iostream>
using namespace std;

class Solution
{
public:
    double power(double n, long long p)
    {
        double ans = 1;
        for (int i = 1; i <= p; i++)
        {
            ans *= n;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    double n;
    long long p;

    cin >> n;
    cin >> p;

    double result = obj.power(n,p);
    
    cout <<"Answer: "<< result ;

    return 0;
}