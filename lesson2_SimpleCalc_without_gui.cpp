//Simple Calculator without gui in cpp
#include <iostream>
using namespace std;
int main()
{
    char operation;
    float n1, n2;
    cout << "Enter one of the operation symbols\n * , / , + or - ";
    cin >> operation;

    cout << "\nenter the first number\n";
    cin >> n1;

    cout << "\nenter the second number\n";
    cin >> n2;

    switch (operation)
    {
    case '-':
        cout << n1 << "-" << n2 << "=" << n1 - n2;
        break;

    case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2;
        break;

    case '/':
        if (n2 == 0)
        {
            cout << "cant divide by zero";
        }
        else
        {
            cout << n1 << "/" << n2 << "=" << n1 / n2;
        }
        break;

    case '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2;
        break;

    default: // if the input is something else
        cout << "the operator is not correct";
        break;
    }

    return 0;
}
