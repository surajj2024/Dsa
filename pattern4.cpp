#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Number"<<endl;
    cin>>num;

    int i = 1;
    int count = 1;
    while (i <= num)
    {
        int j = 1;
        while(j <= num){
            cout<<count<<" ";
            count++;
            j++;

        }
        cout<<endl;
        i++;
    }
    
}