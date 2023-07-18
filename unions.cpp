#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

// You can use only one data type or value at one time!
// unions are used to do better memory management

int main(){

    union money m1;
    m1.rice = 10;
    cout << m1.rice;

    return 0;
}