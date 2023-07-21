#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // int a = 34;
    // cout << "The value of a was " << a << endl;
    // a = 50;
    // cout << "The value of a is " << a << endl;

    //********* Constants in C++ ***************************

    // const float a = 3.11;
    // cout << "The value of a was " << a << endl;
    // a = 45.6; // You will get an error because a is constant
    // cout << "The value of a is " << a << endl;


    // ************* Using setw ******************

    int a = 3, b = 78, c = 1234;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;

    cout << "The value of a is : " << setw(4) << a << endl;
    cout << "The value of b is : " << setw(4) << b << endl;
    cout << "The value of c is : " << setw(4) << c << endl;
    return 0;
}