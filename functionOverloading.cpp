#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using functions with 2 arguments";
    return a+b;

}
int sum(int a, int b, int c){
    cout<<"Using functions with 2 arguments";
    return a+b+c;
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 6 and 4 is "<<sum(3, 6, 4)<<endl;
    return 0;
}