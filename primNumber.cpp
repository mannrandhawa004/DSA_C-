#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }

    return maxi;
}

int getMin(int num[], int n)
{
    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int sumOfarrayElements(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}

int main()
{
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // bool x = 0;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         x = 0;
    //         break;
    //     }
    // }
    // if (x == 0)
    // {
    //     cout << "not a prime number" << endl;
    // }
    // else
    // {
    //     cout << "prime number";
    // }

    // max and min from an array
    int size;
    cout << "Enter the size of an array :";
    cin >> size;

    int num[10];
    cout << "Enter the array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // cout << "Maximum value from an array is:" << getMin(num, size) << endl;
    cout << "Sum of all array elements are :" << sumOfarrayElements(num, size) << endl;

    return 0;
}