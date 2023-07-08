#include<iostream>
using namespace std;

int main(){

    // Array example

    int marks[] = {70,80,77,87,99};
    
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // You can change the value of an array
    
    // marks[2] = 84;
    // cout << marks[2] << endl;

    // Printing values of array using loop 

    for(int i=0; i<5; i++){
        cout << marks[i] << endl;
    }

    int i=0;
    while(i<5){
        cout << marks[i] << endl;
        i++;
    }

    int j=0;
    do{
        cout << marks[j] << endl;
        j++;
    }while(j<5);

    return 0;
}