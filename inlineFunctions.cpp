#include<iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}

int main(){

    int a, b;
    cout << "Enter the value of a and b is " << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a,b) << endl;

    return 0;
}