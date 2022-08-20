#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        int j = 1;
        int start = (num - i + 1);
        while(j <= start){
            cout<<"*";
            // start--;
            j++;
        }
        cout<<endl;
        i++;
    }
}