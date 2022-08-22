#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char ch;
    cout << "Enter first number" << endl;
    cin >> i;
    cout << "Enter second number" << endl;
    cin >> j;
    cout << "Enter operator" << endl;
    cin >> ch;

    int answer = 0;
    switch (ch)
    {
    case '+':
        answer = i + j;
        // cout << sum << endl;
        break;

    case '-':
        answer = i - j;
        break;
    case '*':
        answer = i * j;
        break;
    case '/':
        answer = i / j;
        break;
    case '%':
        answer = i % j;
        break;

    default:
        cout<<"Invalid operator" << endl;
        exit(0);
    }

    cout << answer << endl;
}