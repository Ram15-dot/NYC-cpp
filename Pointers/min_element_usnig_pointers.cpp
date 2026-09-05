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
    int Min = *ptr;
    for (int i = 0; i < size; i++)
    {
        Min = min(Min, *(ptr + i));
    }
    cout << Min;
    return 0;
}