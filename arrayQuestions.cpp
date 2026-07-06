#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <algorithm>

int getMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "The max value is :" << max;
}

int getMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "The min value is:" << min;
}

void sumOfArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of array is :" << sum;
}

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int power(int num, int pow)
{
    int result = 1;
    for (int i = 1; i <= pow; i++)
    {
        result *= num;
    }
    return result;
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void findUniqueElement(int arr[], int size)
{
    cout << "The unique elements are:";
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

void findMultipleUnique(const std::vector<int> arr)
{
    unordered_map<int, int> countMap;
    for (int x : arr)
    {
        countMap[x]++;
    }

    cout << "unique elements:";

    for (auto pair : countMap)
    {
        if (pair.second == 1)
        {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}

void dupliplicate(int arr[], int size)
{
    cout << "Duplicate elments are:";

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << arr[i];
        }
    }
}

void findDuplicatesMap(const vector<int> &arr){
    unordered_map<int, int> countMap;

    cout << "Duplicates: ";
    for (int x : arr)
    {
        countMap[x]++;

        // CHECK INSTANTLY:
        // We can check right now inside the same loop.
        // If the count just became 2, it means we found a duplicate!
        if (countMap[x] == 2)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

void intersection(int arr1[], int size1, int arr2[], int size2)
{

    // for (int i = 0; i < size1; i++)
    // {
    //     for (int j = 0; j < size2; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr1[i] << " ";
    //             break;
    //         }
    //     }
    // }

    int i = 0;
    int j = 0;
    cout << "Intersection: ";
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        // Case 2: arr2 element is smaller -> Move j
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        // Case 3: Match found! -> Move both
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

bool alreadyPrinted(int result[], int resSize, int value)
{
    for (int i = 0; i < resSize; i++)
    {
        if (result[i] == value)
            return true;
    }
    return false;
}

void intersection2(int arr1[], int size1, int arr2[], int size2)
{
    int result[100]; // to store unique intersection elements
    int resSize = 0;

    cout << "Intersection: ";

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // check if already printed
                if (!alreadyPrinted(result, resSize, arr1[i]))
                {
                    result[resSize++] = arr1[i]; // store unique
                    cout << arr1[i] << " ";
                }
                break;
            }
        }
    }
}

int pairSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ") ";
            }
        }
    }
}

void pairSumTwoPointer(vector<int> arr, int target){
    // Step 1: Sort the array (Required for Two-Pointer)
    sort(arr.begin(), arr.end());

    int i = 0;              // Start pointer
    int j = arr.size() - 1; // End pointer

    cout << "Pairs found: ";

    while (i < j)
    {
        int currentSum = arr[i] + arr[j];

        if (currentSum == target)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
            i++;
            j--;
        }
        else if (currentSum < target)
        {
            // Sum is too small -> Need bigger numbers -> Move i right
            i++;
        }
        else
        {
            // Sum is too big -> Need smaller numbers -> Move j left
            j--;
        }
    }
    cout << endl;
}

void pairSum2(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    cout << "pairs:";

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "(" << arr[left] << "," << arr[right] << ") ";
            left++;
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right++;
        }
    }
}

void sortZerosOnes(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {

            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}

void findUniqueElementXOR(int arr[], int size) 
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique ^= arr[i];
    }

    cout << "Unique Element: " << unique << endl;
}

void countDuplicates(int arr[], int n)
{
    bool counted[n] = {false};

    cout << "Duplicate elments with thier counts:\n";
    bool hasDuplicate = false;

    for (int i = 0; i < n; i++)
    {
        if (counted[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                counted[j] = true;
            }
        }
        if (count > 1)
        {
            cout << arr[i] << " occurs " << count << " times\n";
            hasDuplicate = true;
        }
    }
    if (!hasDuplicate)
        cout << "No duplicates found\n";
}

void countDuplicates(vector<int> &arr)
{
    unordered_map<int, int> countMap;

    // Step 1: Build the Frequency Table
    for (int x : arr)
    {
        countMap[x]++;
    }

    // Step 2: Print only the duplicates
    cout << "Duplicate Counts:\n";
    for (auto pair : countMap)
    {
        if (pair.second > 1)
        {
            cout << "Value " << pair.first << " appears " << pair.second << " times.\n";
        }
    }
}

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    // int size;
    // cout << "Enter the size of arr: ";
    // cin >> size;

    // int arr[100];

    // cout << "Enter the elements of arr:" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    // // Print to confirm input
    // cout << "You entered: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // getMax(arr, size);
    // getMin(arr, size);
    // sumOfArray(arr, size);

    // ---------------------------------------

    int arr[] = {3, 3, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    // cout << "Enter the element you want to find: ";
    // cin >> key;

    // int element = linearSearch(arr, size, key);
    // cout << "The index of element is:" << element;

    // -------------------------
    // int expo = power(2, 3);
    // cout << expo;

    // ----------------
    // reverseArray(arr, size);

    // swapAlternate(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // findUniqueElement(arr, size);
    // dupliplicate(arr, size);

    // -------------intersection---------

    // int arr1[] = {1, 2, 3, 4, 3, 4};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // int arr2[] = {3, 4, 5, 6, 4, 3};
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // intersection(arr1, size1, arr2, size2);

    // ------------pair sum------------
    int pairSumArr[] = {2, 1, 3, 4, 5, 7};
    int size3 = sizeof(pairSumArr) / sizeof(pairSumArr[0]);
    int target = 8;
    // pairSum(pairSumArr, size3, target);

    // pairSum2(pairSumArr, size3, target);

    // -----------------sort 0's and 1's-------------
    int zeroOnesArr[] = {1, 0, 0, 1, 0, 1, 0, 1, 1};
    int size4 = sizeof(zeroOnesArr) / sizeof(zeroOnesArr[0]);
    // sortZerosOnes(zeroOnesArr, size4);

    // cout << "Sorted array: ";
    // for (int i = 0; i < size4; i++)
    // {
    //     cout << zeroOnesArr[i] << " ";
    // }

    // int arrXOR[] = {2, 3, 5, 4, 5, 3, 2};
    // int sizeXOR = sizeof(arr) / sizeof(arr[0]);
    // findUniqueElementXOR(arrXOR, sizeXOR);

    int arrD[] = {1, 2, 3, 2, 4, 5, 1, 2};
    // int n = sizeof(arrD) / sizeof(arrD[0]);
    // countDuplicates(arrD, n);

    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n + m];
    // mergeSortedArray(arr1, n, arr2, m, arr3);

    // cout << "Merged Sorted Array: ";
    // for (int i = 0; i < n + m; i++)
    // {
    //     cout << arr3[i] << " ";
    // }

    // std::vector<int> arr = {1, 2, 1, 3, 4, 3, 5};
    // 1 repeats, 3 repeats. 2, 4, 5 are unique.
    // findMultipleUnique(arr);

    // int arr[] = {1, 2, 3, 2, 4, 5, 5, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // Convert raw array to vector explicitly
    vector<int> v = {1, 2, 3, 5, 3, 19, 2, 8, 3};
    countDuplicates(v);
    return 0;
}