#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    //   Write your code here
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

/* #include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    //   Write your code here
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}
 */