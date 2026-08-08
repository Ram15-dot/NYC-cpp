#include <iostream>
#include <string>
using namespace std;
int main()
{
    int even = 0, odd = 0;
    string n;
    cin >> n;
    for (int i = 0 ; i < n.size() ; i ++)
    {
        
        if ((int)(n[i]) % 2 == 0)
        {
            //cout << n[i] <<" I am inside Even"<<endl;
            even++;
        }
        else if (n[i] == '-')
        {
            
        }
        
        else
        {   //cout << n[i] <<" I am inside Odd"<<endl;
            odd++;
        }

        
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd;
    return 0;
}