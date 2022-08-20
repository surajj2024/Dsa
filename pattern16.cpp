#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        int j = 1;
        char ch = ('A' + num - i);
        while(j <=i){
            
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}