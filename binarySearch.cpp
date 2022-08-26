#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid =  start + (end - start) / 2;    //(start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid =  start + (end - start) / 2;                 //(start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 2, 43, 54, 65, 76};
    int odd[5] = {1, 12, 23, 34, 45};

    cout<<binarySearch(even, 6, 54)<<endl;
    cout<<binarySearch(odd, 5, 20)<<endl;
}