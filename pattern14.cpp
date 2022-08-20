#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a value"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        int j = 1;
        while(j<=i){
            char ch = ('A'+i+j-2);
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}