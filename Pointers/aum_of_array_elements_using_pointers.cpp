#include <iostream>

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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i);
    }
    cout << sum;
    return 0;
}