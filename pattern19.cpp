#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int i = 1;
    while(i <= num){

        // for spaces
        int spaces = i - 1;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        // for stars
        int j = 1;
        int start = num - i+1;
        while(j <= start){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}