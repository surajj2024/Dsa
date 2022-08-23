#include <iostream>
using namespace std;

// For AP
/*
int ap(int a){
    int ans = (3 * a + 7);
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;

    cin>>n;

    int value = ap(n);

    cout<<value<<endl;

} */

/*
int fib(int n)
{
    int a, b;
    a=0;
    b=1;
    int temp =0;
    for(int i = 1 ; i <n; i++){
        a = b;
        b = temp;
        temp = a + b;

        // cout<<temp<<endl;
    }
        // cout<<temp<<"Finally"<<endl;
        return temp;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int answer = fib(n);
    cout<<answer<<endl;
}

*/

int setBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
            n = n >> 1;
    
    }
    return count;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    int answer1, answer2;
    answer1 = answer2 = 0;
    
    answer1 = setBits(a);
    answer2 = setBits(b); 


    int answer = answer1 + answer2;
    cout<<answer<<endl;
}
