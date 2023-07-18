#include<iostream>
using namespace std;

inline int product(int a, int b){
    // static int c = 0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

// float factor is a default arguement but it can be overwritten
// default arguement should written in extreme right side only
float moneyReceived(int currentMoney, float factor = 1.04){ 
    return currentMoney * factor;
}

// constant arguements
// int strlen(const char *p){
    
// }

int main(){

    int a, b;
    cout << "Enter the value of a and b is " << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;
    cout << "The product of a and b is " << product(a,b) << endl;

    return 0;
}