#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num"<<endl;
    cin>>num;

    int i = 1;

    while(i<=num){ 
        int j = 1; 
        
        while(j <= num){
            char ch = ('A' + j - 1);
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
