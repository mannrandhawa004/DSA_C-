#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
// 1.find first and last occurence of elem in the array

int firstOccu(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccu(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
// 2.Peak index in a moutain array [0,1,0]

int peakIndexInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

// fid pivot element in the array

int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
}

// search in roated sorted array
int searchInRotatedArray(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end -start) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[start] <= arr[mid])
        {
            if (key >= arr[start] && key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (key > arr[mid] && key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{

    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int n = 6;
    // int key = 40;

    // int index = binarySearch(arr, n, key);

    // if (index != -1)
    //     cout << "Element found at index: " << index;
    // else
    //     cout << "Not found";

    // int arr[] = {1, 2, 3, 3, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 3;

    // int first = firstOccu(arr, n, x);
    // int last = lastOccu(arr, n, x);

    // cout << "First Occurrence of " << x << " is at index: " << first << endl;
    // cout << "Last Occurrence of " << x << " is at index: " << last << endl;

    // int arr2[] = {0, 1, 0};
    // int n = sizeof(arr2) / sizeof(arr2[0]);

    // int peak = peakIndexInMountainArray(arr2, n);
    // cout << peak;

    // -------------pivot elem------------
    // int arr[] = {7, 9, 1, 2, 3};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // int pivotIndex = pivotElement(arr, size);
    // cout << "Pivot Index: " << pivotIndex << endl;
    // cout << "Pivot Element: " << arr[pivotIndex] << endl;

    // -----------search in sorted roated array----------
    int arr[] = {7, 9, 1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int index = searchInRotatedArray(arr, n, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}