#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a value"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){

        // for spaces
        int spaces = num - i;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        // for star
        int j = 1;
        while(j <= i){
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;

    }
}