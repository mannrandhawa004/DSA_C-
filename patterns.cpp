#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows to print :";
    cin >> n;

    // int row = 1;

    // while (row <= n) {
    //     int col = 1;
    //     while (col<= n) {
    //         cout<<col<<" ";
    //         col ++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int sum = 0;
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << (sum + col) << " ";
    //         sum += col;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // int num = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << num << " ";
    //         num++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int i = 1;
    // while (i <= n){
    //     int j = 1;
    //     while (j <= i){
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i= 1;
    // int num = 1;

    // while (i<=n){
    //     int j = 1;
    //     while (j<=i){
    //       cout<<num<<" ";
    //       num++;
    //       j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i){
    //         cout<<(i - j + 1 )<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i = 1;

    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i){
    //         cout<<(j%2)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // -----------------revrese loops---------------

    // int i = n;
    // while (i >= 1)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i--;
    // }

    // 5
    // 4 4
    // 3 3 3
    // 2 2 2 2
    // 1 1 1 1 1

    // j
    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5

    // int i = n;
    // while (i >= 1){
    //     int j = n;
    //     while(j>=i){
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout<< endl;
    //     i--;

    // }

    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    // int i = n;
    // while (i >= 1)
    // {
    //     int j = n;
    //     while (j >= i)
    //     {
    //         cout << i << " ";
    //         j--;
    //     }
    //     cout << endl;
    //     i--;
    // }

    // 3
    // 2 2
    // 1 1 1

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         int fact = 1;
    //         int k = 1;
    //         while (k <= j)
    //         {
    //             fact *=k;
    //             k++;
    //         }
    //         cout << fact << " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 1
    // 1 2
    // 1 2 6
    // 1 2 6 24

    // ------------revrese triangle---------

    // int i = n;
    // while (i >= 1)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // int i = n;
    // while (i >= 1)
    // {
    //     int j = i;
    //     while (j >= 1)
    //     {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    // int i = n;
    // while (i>=1)
    // {
    //     int j = i;
    //     while (j>=1){

    //       cout<< i << " ";
    //       j--;
    //     }
    //     cout<<endl;
    //     i--;

    // }

    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = n;
    //     while (j >= i)
    //     {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 3 2 1
    // 3 2
    // 3

    // int i = n;
    // while (i >= 1)
    // {
    //     int j = i;
    //     while (j >= 1)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             cout << 0 << " ";
    //         }
    //         else
    //         {
    //             cout << i << " ";
    //         }
    //         j--;
    //     }
    //     cout << endl;
    //     i--;
    // }

    // 5 5 5 5 5
    // 0 0 0 0
    // 3 3 3
    // 0 0
    // 1

    // ----------------start patterns--------------

    // int i = 1;
    // while (i<=n){
    //     int j= 1;
    //     while (j<=i){
    //        cout<<"*"<<" ";
    //        j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int space = 1;
    //     while (space <= n - i)
    //     {
    //         cout << " ";
    //         space++;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*" << " ";
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    // int i = 1;
    // while (i <= n)
    // {
    //     int space = 1;
    //     while (space <= n - i)
    //     {
    //         cout << "  ";
    //         space++;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* " ;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
 
    int i = 1;
    int x = n;
    while (i <= n)
    {
        int j = 1;
        while (j <= x)
        {
            cout << j<<" ";
            j++;
        }

        int k = 2;
        while (k <= i)
        {
            cout << "*"<<" ";
            k++;
        }
        // -------------------------------

        int m = 2;
        while (m <= i)
        {
            cout << "*"<<" ";
            m++;
        }

        int l = x;
        while (l >= 1)
        {
            cout << l<<" ";
            l--;
        }

        cout << endl;
        x--;
        i++;
    }

    return 0;
}