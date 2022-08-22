#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value to see compliment of  base 1 integer." << endl;
    cin >> n;

    int m = n;
    int mask = 0;

    if (n == 0)
    {
        cout<<"You must enter a value greater than zero."<<endl;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans << endl;
}