#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    long long n;
    while (test--)
    {

        cin >> n;
        vector<long long> intArray;
        vector<char> charArray;
        vector<long long> tempA, tempB, tempC;
        long long minA, minB, minC;
        // input
        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            intArray.push_back(temp);
        }
        for (long long i = 0; i < n; i++)
        {
            char temp;
            cin >> temp;
            charArray.push_back(temp);
        }
        // main logic
        for (long long i = 0; i < n; i++)
        {

            switch (charArray[i])
            {
            case 'a':
                tempA.push_back(intArray[i]);
                minA = tempA[0];
                for (long long i : tempA)
                {
                    minA = min(minA, i);
                }

                break;
            case 'b':
                tempB.push_back(intArray[i]);
                minB = tempB[0];
                for (long long i : tempB)
                {
                    minB = min(minB, i);
                }

                break;
            case 'c':
                tempC.push_back(intArray[i]);
                minC = tempC[0];
                for (long long i : tempC)
                {
                    minC = min(minC, i);
                }

                break;
            }
        }

        if (n > 3)
        {
            cout << min(minA + minB, minC);
        }
        else
        {

            cout << min(minA, min(minB, minC));
        }
    }
    return 0;
}