#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternativeArray(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[5] = {1, 3, 4, 6, 9};
    int brr[6] = {1, 3, 4, 6, 9, 8};

    

    swapAlternativeArray(arr, 5);
    swapAlternativeArray(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}