#include <iostream>
using namespace std;

int minValue(int num[], int n)
{
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        
        // another trick
        mini = min(mini, num[i]);

        // normal case
        /* if(num[i] < min){
            min = num[i];
        } */
    }
    // return min value
    return mini;
}
int maxValue(int num[], int n)
{
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        
        // trick 
        maxi = max(maxi, num[i]);


        // normal case
        /* if(num[i] > max){
            max = num[i];
        } */
    }
    // return min value
    return maxi;
}

int main()
{

    int size;
    cout<<"Enter size of array"<<endl;
    cin >> size;
    int num[100];

    cout<<"Enter "<<size<<" elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout<<"Maximum value is "<< maxValue(num, size) << endl;
    cout<<"Minimum value is "<< minValue(num, size) << endl;
}