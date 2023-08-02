    // OOPs - Classes and objects

    // C++ --> initially called --> C with classes by strousroup
    // class --> extension of structures (in C)
    // Structures had limtations
    //      --> members are public
    //      --> No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private & few as public
    // strutures in C++ are typedefed
    // you can declare objects along with the class declaration like this:
    /*class Employee{
        // Class defination
    } harry, rohan, yash; */
    // yash.salary = 8 makes no sense if salary is private
    // By deafault everything is private in a C++ class

    // Nesting of member functions

#include <iostream>
using namespace std;

class binary{

private:
    string s;
    void check_binary(void);
public:
    void read(void);
    void onesComplimet(void);
    void display(void);
}yash;

void binary :: read(void){
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary :: check_binary(void){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!= '1'){
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    
}

void binary :: onesComplimet(void){
    check_binary();
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout << "Displaying your binary number" << endl;
    for(int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
}

int main(){

    binary b;
    b.read();
    // b.check_binary(); // We can't use this function because it's private
    b.onesComplimet();
    b.display();
    // yash.read();
    

    return 0;
}