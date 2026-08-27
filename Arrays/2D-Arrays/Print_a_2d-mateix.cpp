#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int row, column;
    cin >> row;
    cin >> column;
    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j];
            if (j < (column - 1))
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}