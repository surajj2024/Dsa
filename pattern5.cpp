#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 1;
    int count;

    while(i <= num){
        int j = 1;
        while(j<= i) {
            // cout<<"*"; //for * patterns;
            cout<<i;    //for number 1 22 333;
            j++;

        }
        cout<<endl;
        i++;
    }

}