#include <iostream>
using namespace std;

bool linearSearch(int arr[3][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at index: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    return false;
}

void printRowSum(int arr[3][3], int rows, int cols)
{
    int max = INT16_MIN;
    int maxRowIndex = -1;
    for (int i = 0; i < rows; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currentSum += arr[i][j];
        }

        if (currentSum > max)
        {
            max = currentSum;
            maxRowIndex = i;
        }
    }
    cout << "Sum of row" << ":" << maxRowIndex << endl;
}

bool binarySearch2D(int arr[3][3], int rows, int cols, int target)
{
    int start = 0;
    int end = (rows * cols) - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / cols;
        int colIndex = mid % rows;

        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            cout << "Found at: (" << rowIndex << ", " << colIndex << ")" << endl;
            return true;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    // bool found = linearSearch(arr, 3, 3, target);

    // if (!found)
    // {
    //     cout << "Element not found in the array." << endl;
    // }

    printRowSum(arr, 3, 3);

    return 0;
}