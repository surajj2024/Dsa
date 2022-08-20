#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a value"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        // for spaces
        int spaces = num-i;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        // for numbers
        int j = 1;
        while(j<= i){
            cout<<i;
            j++;
        }

        cout<<endl;
        i++;




    }
}