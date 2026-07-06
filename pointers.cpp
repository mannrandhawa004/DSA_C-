#include <iostream>
using namespace std; 


int main(){
    int a = 45;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The address of b is :"<<b<<endl;

    cout<<"The value at address of b is :"<<*b<<endl;

    cout <<"The address of c is:"<<c<<endl;
    cout<<"The value at address of c is :"<<**c<<endl;
    cout<<"The value at address of d is :"<<***d<<endl;
    return 0;
}