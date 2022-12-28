#include<iostream>
using namespace std;

class Human {

    private:
    int height;

    public: 
    int weight;

    private:
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;

    }

};

class Male: private Human {

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }

};



int main() {

    Male m1;
    //cout << m1.height << endl;



/*
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();
    */

    return 0;
}














/* #include<iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

        public:
            int getAge(){
                return this-> age;
            }
            void setWeight(int w){
                this->weight = w;
            }
};

class male: public human{
    public:
        string color;

        void attack(){
            cout<<"Wanted to attack"<<endl;
        }
};


int main(){
    male object1;
    cout<<"age"<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    object1.setWeight(88);
    cout<<object1.weight<<endl;

    cout<<object1.getAge()<<endl;


    cout<<object1.color<<endl;
    object1.attack();


    
    return 0;
} */