#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout << "Enter the Id " << endl;
            cin >> id;
            count++;
        }
        void getData(void){
            cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
        }

        static void getCount(void){
            cout << "The value of count is " << count << endl;
        }
};

// Count the static data members of class employee
int Employee :: count; // Default value is 0

int main(){
    Employee yash, sarthak, nikhil;

    yash.setData();
    yash.getData();
    Employee :: getCount();

    sarthak.setData();
    sarthak.getData();
    Employee :: getCount();

    nikhil.setData();
    nikhil.getData();
    Employee :: getCount();

    return 0;
}