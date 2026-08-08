#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char option, choise;
    do
    {

        cin >> num1;
        cin >> num2;
        cin >> option;

        switch (option)
        {
        case '+':
            cout << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 - num2 << endl;
            break;

        case '/':
            if (num2 != 0)
            {
                cout << num1 / num2 << endl;
            }
            else
            {
                cout << "Division by zero is not allowed \n";
            }

            break;

        case '*':
            cout << num1 * num2 << endl;
            break;

        case '%':

            if (num2 != 0)
            {
                cout << num1 % num2 << endl;
            }
            else
            {
                cout << "Division by zero is not allowed \n";
            }

            break;
        default:
            cout << "Invalid Operator \n";
            break;
        }
        cin >> choise;

    } while (choise == 'Y' || choise == 'y');

    return 0;
}