#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 0;
    char count = 'A';
    while(i<=num){
        int j = 1;
        
        while(j<=i){
            cout<<count;
            count++;    
            j++;
        }
        cout<<endl;
        i++;
    }
}