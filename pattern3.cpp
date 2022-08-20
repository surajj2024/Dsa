#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 1;

    while(i <= num){
        int j = 1;
        while (j <= num) {
            // cout<<num-j+1; //For opposite of the number like 4321;
            cout<<j; //for normal of the number;

            j++;

        }
        cout<<endl;
        i++;
    }
}