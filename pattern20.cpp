#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Number" << endl;
    cin >> num;

    int i = 1;

    while (i <= num)
    {

        // for space
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // for number

        int j = 1;
        int start = (num- i + 1);
        while (j <= start)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }
}