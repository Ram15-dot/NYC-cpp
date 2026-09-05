#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int *temp = 0;
    int *ptra = &a, *ptrb = &b;
    temp = ptra;
    ptra = ptrb;
    ptrb = temp;
    cout << *ptra << " " << *ptrb;

    return 0;
}