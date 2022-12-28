#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"inside func1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"inside func2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"inside func3"<<endl;
    }
};




int main(){

    A obj1;
    B obj2;
    C obj3;

    obj1.func1();


    obj2.func1();
    obj2.func2();

    obj3.func1();
    // obj3.func2(); //its give error because it is not in the class of the function
    obj3.func3();





    return 0;
}