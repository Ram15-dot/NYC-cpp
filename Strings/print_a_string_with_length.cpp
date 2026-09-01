#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[1000];
    cin.getline(str, 1000);
    cout << "String is \"" << str << "\"" << " and its length is " << strlen(str) << endl;
    return 0;
}