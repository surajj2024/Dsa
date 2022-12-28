#include <iostream>
// #include "hero.cpp"
using namespace std;

class hero
{
    // properties
public:
    int health;
    // double salary;
    char level;

    hero(){
        cout<<"Constructor called"<<endl;
    }

    
    // parametrized constructor
    hero(int health){
        // cout<<"this address is      " << this <<endl;
        this -> health = health;
    }

    hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout<<"level is "<<this -> level<<endl;
        cout<<"health is "<<this -> health<<endl;
    }




    int getHealth(){
    return health;
    }


    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

/* class allEmptyObject
{
    // empty property
}; */



int main()
{




















// const and initialized chapter object
// const int k = get_size();
// cout<<k<<endl;


// const int pi = 3.14;

// pi = 11;

// cout<<"pi is " <<pi<<endl;




/* 
    hero suresh(70, 'A');
    suresh.print();


    // copy contractor
    hero ritesh(suresh);
    ritesh.print(); */






/* 
    // agar humlog default constructor ko hata denge to isme error a jyegaa
    hero tt;

    hero ramesh(10);
    ramesh.print();
    // cout<<"Address of Ramesh is "<<&ramesh<<endl;
    // ramesh.getHealth();


    // dynamically
    hero *h = new hero(11);
    h -> print();

    hero temp(10, 'F');
    temp.print();

 */    


    






    // static allocation
/*     hero a;
    a.setHealth(80);
    a.setLevel('B');

    // static allocation
    hero b;
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    // Dynamic allocation
    hero *h = new hero;
    h->setLevel('A');
    h->setHealth(70);

    cout<<"level is "<<(*h).level<<endl;
    cout<<"health is "<<(*h).getHealth()<<endl;


    cout<<"level is "<<h -> level<<endl;
    cout<<"health is "<<h -> getHealth()<<endl;

 */





    /* hero h1;
    cout << "size of: " << sizeof(h1) << endl;

    allEmptyObject h2;
    cout << "size of: " << sizeof(h2) << endl;

    h1.health = 80;
    h1.level = 'A';

    cout << "health is " << h1.health << endl;
    cout << "level is " << h1.level << endl;

    hero ramesh;
    cout << "size of ramesh is " << sizeof(ramesh) << endl; */
    
    return 0;       
}