#include <iostream>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}


int main()
{
    int num[100];
    int size;
    cout<<"Enter number"<<endl;
    cin>>size;
    cout<<"enter "<<size<<" number"<<endl;
    for(int i =0; i<size; i++){
        cin>>num[i];
    }

    int final = sum(num, size);

    cout<<"final sum: "<<final<<endl;
}