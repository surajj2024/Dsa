#include <iostream>
using namespace std;

// Square root function without decimal point
/* int binarySearch(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
} */

// square root with decimal points
int squareRootInteger(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    int ans = precision;
    for(int i = 0; i < precision; i++){
        int factor = factor/10;
        for(int j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int tempSol = squareRootInteger(n);
    cout << "answer is " << morePrecision(n, 4, tempSol) << endl;
    return 0;
}