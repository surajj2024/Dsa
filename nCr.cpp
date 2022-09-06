#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numero = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    return numero / denom;

}

int main()
{
    int a , b;
    cout<<"Enter a value"<<endl;
    cin>>a>>b;

    cout<<"nCr value is "<< nCr(a, b) <<endl;
}