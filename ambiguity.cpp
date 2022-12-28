#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"In the class A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"In the class B"<<endl;
    }
};

class C : public A, public B{

};

int main(){

    C c;
    // c.func(); // error: request for member 'func' is ambiguous
    c.A::func();
    c.B::func();


    return 0;
}