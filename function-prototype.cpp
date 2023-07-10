#include<iostream>
using namespace std;

// Function Prototype 
// type function-name (arguments);
// int sum(int a, int b);   --> Accaptable
// int sum(int a, b); --> Not Accaptable

int sum(int, int);  // Accaptable

// void g(void);  --> Accaptable
void g();

int main(){

    int num1, num2;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    // num1 and num2 are the actual parameters
    cout << "The sum is : " << sum(num1, num2);
    g();

    return 0;
}


int sum(int a, int b){

    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g(){
    cout << "\n Hello, Good Morning";
}