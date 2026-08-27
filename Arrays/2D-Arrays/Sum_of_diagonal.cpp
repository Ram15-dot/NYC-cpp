#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int index;
    cin >> index;
    int arr[index][index];

    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum1 = 0, sum2;
    if (index % 2 == 0)
    {
        sum2 = 0;
    }
    else
    {
        sum2 = arr[index / 2][index / 2];
    }

    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            else if (i + j == index - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}