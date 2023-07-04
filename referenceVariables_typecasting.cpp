#include<iostream>
using namespace std;

int c = 45;

int main(){


// ********************Build in data types******************

  /* int a, b, c;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;
    c = a + b;

    cout << "The sum is : " << c << endl;
    cout << "The global c is : " << ::c << endl; */


  // ***************** Float, double and long double Literals ****************

    // float d = 34.4f;
    // long double e = 34.4l;

    // cout << "The size of 34.4 is : " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is : " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is : " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is : " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is : " << sizeof(34.4L) << endl;


    //******************* Reference Variables ******************

    // float x = 10;
    // float & y = x;

    // cout << x << endl;
    // cout << y << endl;


    //*********************** Typecasting ****************

    int a = 45;
    float b = 30.44;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of b is " << (int)b << endl;

    return 0;
}