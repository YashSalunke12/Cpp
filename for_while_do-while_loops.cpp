#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=5; i++){
        cout << i  << endl;
    }

    int i=1;

    while(i<=5){
        cout << i << endl;
        i++;
    }

    int j=1;

    do{
        cout << j << endl;
        j++;
    }while(j<=5);

    return 0;
}