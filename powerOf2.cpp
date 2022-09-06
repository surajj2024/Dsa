#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        // int ans = pow(2, i);
        if (ans == n)
        {
            cout<<"true"<<endl;
        }
        if (ans < INT_MAX / 2)
        {
            ans = ans * 2;
        }
        // return false;
    }
    cout<<"false"<<endl;
}



//for exit function
/* #include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter the number : ";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			cout<<"\nNot a prime number!";
			exit(0);
		}
	}
	cout<<"\nIt is a prime number!";
	return 0;
} */