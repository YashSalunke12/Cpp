#include <iostream>
using namespace std;
 

 // Call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by pointers 
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference 
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int & swapReferenceVarx(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will swap a and b
    // swapPointer(&x, &y); // This will swap a and b using pointer reference
    swapReferenceVar(x, y); // This will swap a and b using referece variables
    swapReferenceVarx(x, y) = 766;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
