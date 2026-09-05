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

    int *ptr = &arr[size - 1];
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr - i) << " ";
    }

    return 0;
}