#include <iostream>
#include <array>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    /*     int basic[3] = {1, 2, 3};

        array<int, 4> a = {1, 2, 3, 4};
        vector<int> b;


        int size = a.size();
        int n = b.size();

        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " " << endl;
        }

        cout << "Element " << a.at(2) << endl;
        cout << "Empty " << a.empty() << endl;
        cout << "first " << a.front() << endl;
        cout << "last " << a.back() << endl;

        cout<<b.capacity()<<endl;
        b.push_back(1);
        cout<<b.capacity()<<endl;
        b.push_back(2);
        cout<<b.capacity()<<endl;

        b.push_back(3);
        cout<<b.capacity()<<endl;
        cout<<b.size()<<endl;

        b.pop_back();
        cout<<b.size()<<endl;
        for(int i = 0; i < n; i++){
            cout<<b[i]<<" here ew";
        }
     */

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(5);
    d.push_front(10);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    d.pop_back();
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_front();
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    cout << "Element at first " << d.at(1) << endl;

    cout<<d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
        cout<<d.size() << endl;










}
