#include<iostream>
using namespace std;

int main(){

    // ***************** If-else statements ******************

    int age;
    cout << "Enter your age : ";
    cin >> age;

    // if (age >= 18) {
    //     cout << "You can apply for driving lisence";
    // }
    // else{
    //     cout << "You cannot apply for driving lisence";
    // }


    //  ********************* Switch case **********************

    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 20:
        cout << "You are 22";
        break;
    case 34:
        cout << "You are 34";   
        break;

    default:
        cout << "No special cases";
        break;
    }

    return 0;
}