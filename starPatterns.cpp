#include <iostream>
using namespace std;

int centerTriangleStarPattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int reverseCenterTriaglePattern(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int diamondStarPatern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = num - 1; i >= 1; i--)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int sandTimmerStarPattern(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int rightAngleTriangleStarPattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int rightReverseTriangleStarPattern(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int hollowFullPyramid(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j == 1 || j == 2 * i - 1 || i == num)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int pascalTriangle(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j == 1 || j == 2 * i - 1)
            {
                cout << "1";
            }
            else if (j % 2 != 0)
            {
                cout << i - 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}


void hallowSquarePattern(int n)
{
    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns (width is 2*n - 1 to account for spaces)
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            // 1. Top and Bottom Rows
            if (i == 1 || i == n)
            {
                // Print stars only on odd indices (1, 3, 5...)
                if (j % 2 != 0)
                    cout << "*";
                else
                    cout << " ";
            }
            // 2. Middle Rows
            else
            {
                // Print star at the start AND the very end
                if (j == 1 || j == 2 * n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}



int main()
{
    // centerTriangleStarPattern(5);
    // reverseCenterTriaglePattern(5);
    // diamondStarPatern(5);
    // sandTimmerStarPattern(5);
    // rightAngleTriangleStarPattern(5);
    // rightReverseTriangleStarPattern(5);
    // hollowFullPyramid(5);
    // pascalTriangle(8);
    hallowSquarePattern(5);
   

    return 0;
}