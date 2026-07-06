#include <iostream>
using namespace std;

int halfDiamondPattern(int n)
{
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    for (int i = 2*n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

}
int main()
{
    halfDiamondPattern(5);
    return 0;
}