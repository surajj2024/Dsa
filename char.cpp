#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool isPalindrome(char a[], int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if(toLowerCase(a[start]) != toLowerCase(a[end])) {
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(name[start], name[end]);
        start ++;
        end--;
    }
}

int countLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count ++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"enter"<<endl;

    cin>>name;

    // cout<<name;

    int length = countLength(name);

    cout<<"Your name length is: "<<length<<endl;
    cout<<name<<endl;   
    reverse(name, length);

    cout<<name<<endl;

    cout<<isPalindrome(name, length)<<endl;

    cout<<toLowerCase('s')<<endl;
    cout<<toLowerCase('R')<<endl;
    

    return 0;
}