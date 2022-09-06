/* #include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1, 2, 4, 6, 9};
    int brr[6]={1, 2, 4, 6, 9, 0};


    reverse(arr, 5);
    reverse(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
} */

// another time
#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector <int> arr){
    int start = 0;
    int n = arr.size();
    int end = n - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    return arr;
}


int main()
{
    vector<int> arr;
    
    
    arr.push_back(9);
    arr.push_back(12);
    arr.push_back(19);
    arr.push_back(23);
    arr.push_back(0);


    int n = arr.size();
    cout<<"input array is :";
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    }

    cout<<endl;
    vector <int> ans = reverse(arr);
    cout<<"Reverse array is ";
    for (int i = 0; i < n; i++)
    {
        
        cout << ans[i] << " ";
    }
}
