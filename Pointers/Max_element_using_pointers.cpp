#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    int *ptr = arr;
    int Max = *ptr;
    for (int i = 0; i < size; i++)
    {
        Max = max(Max, *(ptr + i));
    }
    cout << Max;
    return 0;
}