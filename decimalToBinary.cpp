#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to convert it into binary form" << endl;
    cin >> n;

    int i = 0;
    double ans = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}