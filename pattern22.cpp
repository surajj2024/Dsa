#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a value"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num){
        // for spaces
        int spaces = i -1;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        // for numbers
        int j = 1;
        int start = num - i +1;
        while(j<= start){
            int value = i + j -1 ;

            cout<<value;
            // value++;
            j++;
        }

        cout<<endl;
        i++;




    }
}