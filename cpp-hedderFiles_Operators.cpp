// There are two types of header files :
// 1) System header files - which comes with the compiler
#include<iostream>

// 2) User defined header files - It is written by the programmer 
// #include "this.h" --> This will throw an error if this.h is not present in your current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout << "Operators in c++" << endl;
    cout << "Following are the types of operators in c++" << endl << endl;


    // Arithmatic Operators

    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;


    // Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';


    // Comparison operators

    cout << "Following are the comparison operators in C++" << endl << endl;
    cout << "The value of a == b is " << (a==b) << endl;
    cout << "The value of a != b is " << (a!=b) << endl;
    cout << "The value of a >= b is " << (a>=b) << endl;
    cout << "The value of a <= b is " << (a<=b) << endl;
    cout << "The value of a > b is " << (a>b) << endl;
    cout << "The value of a < b is " << (a<b) << endl;


    // Logical operators 

    cout << "Following are the logical operators in C++" << endl << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is : " << ((a==b) && (a<b)) << endl;
    cout << "The value of this logical and operator ((a==b) || (a<b)) is : " << ((a==b) || (a<b)) << endl;
    cout << "The value of this logical and operator (!(a==b)) is : " << (!(a==b)) << endl;

    return 0;
}