#include<iostream>
using namespace std;

int main() {

    // What is pointer? --> Data type which holds the address of other data types

    int a = 3;
    int * b = &a;  // & --> Address of Operator |  * --> Dereference Operator
    cout << b << endl;
    cout << *b << endl; // * is used to get the value stored at b


    // Pointer to Pointer

    int **c = &b;
    cout << c << endl;
    cout << **c << endl;
    cout << *c << endl;
    return 0;
}
