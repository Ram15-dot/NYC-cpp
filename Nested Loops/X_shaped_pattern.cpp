#include <iostream>
using namespace std;

class Solution
{
public:
    void printXShape(int n);
};

void Solution::printXShape(int n)
{
    for (int i =0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j == n - i || j == i +1)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    
}
int main()
{
    Solution obj;
    int inp;
    cin >> inp;
    obj.printXShape(inp);
    return 0;
}