#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10] = {1,2,23,4,15,6,17,78,99,10};

    int key;
    cout<<"Enter a key to search for..."<<endl;
    cin>>key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"The  key: "<<key<<" was found"<<endl;
    }
    else{
        cout<<"The key: "<<key<<" was not found"<<endl;
    }
}