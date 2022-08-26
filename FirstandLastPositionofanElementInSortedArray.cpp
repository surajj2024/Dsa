#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 2, 2, 2, 2, 2, 6, 9, 9};
    cout<<firstOccurrence(arr, 10, 2)<<endl; //1
    cout<<lastOccurrence(arr, 10, 2)<<endl;  //6

}