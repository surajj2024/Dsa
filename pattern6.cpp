#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a num"<<endl;
    cin>>num;

    int i = 1;
    int count = 1;

    while(i <= num){  // 1 <= 3
        int j = 1;
        while(j<= i){   //1 <= 1

            cout<<count<<" ";
            count++;
            j++;

        }

    cout<<endl;
    i++;
    }

}