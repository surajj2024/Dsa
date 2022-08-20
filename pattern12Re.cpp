#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a value" << endl;
    cin >> num;

    int i = 1;
    
    while (i <= num)
    {
        int j = 1;
        char ch = ('A' + i - 1 );
        while (j <= num)
        {
            cout<<ch;
            // char ch = ('A' + i + j - 2); //previous code point
            
            ch++;
            // cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}