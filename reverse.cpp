#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Number" << endl;
    cin >> num;

    int answer = 0;
    while (num != 0)
    {
        int digit = num % 10;

        if(answer > INT_MAX/10 || answer < INT_MIN/10){
            return 0;

        }

        answer = (answer * 10) + digit;

        num = num/10;

    }
    cout<<answer<< endl;
}