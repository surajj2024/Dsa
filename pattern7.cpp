#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        int j = 1;
        int value= i;
        while (j <= i)
        {
            cout<<i+j-1;
            value++;
            j++;
        }
        
        cout<<endl;
        i++;

    }
}