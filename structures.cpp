#include<iostream>
using namespace std;

struct employee {
    int eId;
    char favChar;
    float salary;
};

// shortcut trick

// typedef struct employee {
//     int eId;
//     char favChar;
//     float salary;
// }ep;


int main(){

    struct employee yash;
    // ep sarthak;   using shortcut

    yash.eId = 1;
    yash.favChar = 's';
    yash.salary = 150000;

    cout << "Salary is : " << yash.salary << endl;
    cout << "Favorite Character is : " << yash.favChar << endl;
    cout << "Employee id is : " << yash.eId << endl;

    return 0;
}