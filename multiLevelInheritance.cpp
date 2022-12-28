#include<iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"speaking"<<endl;
        }

};

class dog: public animal{

};

class germanShepherd: public dog{

};

int main(){

    germanShepherd g;
    g.speak();




    return 0;
}