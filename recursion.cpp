#include<iostream>
using namespace std;

// Factorial function
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// Febonacci series
int febonacci(int n){
    if (n<2){
        return 1;
    }
    return febonacci(n-2) + febonacci(n-1);
}

int main(){
    int a;
    cout << "Enter a number : " << endl;
    cin >> a;
    cout << "The febonacci of " << a << " is " << febonacci(a) << endl;
    return 0;
}