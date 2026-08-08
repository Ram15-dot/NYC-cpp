#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string printDayName(int day)
    {
        switch (day)
        {
        case 1:
            return "Monday";
            break;

        case 2:
            return "Tuesday";
            break;

        case 3:
            return "Wednesday";
            break;

        case 4:
            return "Thursday";
            break;

        case 5:
            return "Friday";
            break;

        case 6:
            return "Saturday";
            break;

        case 7:
            return "Sunday";
            break;

        default:
        return "Invalid Day" ;
            break;
        }
    }
};

int main()
{
    int inp;
    cin >> inp;
 
    return 0;
}
