// Write a program by creating an Employee class having functions and print the final salary.
#include<iostream>
using namespace std;
class Employee{
    int salary, hour;
    public:
    void getInfo(int a, int b){ //get info from main function
        salary = a; 
        hour = b;
    }
    void AddSal(){ // check and add salary
        if(salary<500){
            salary +=10;
        }
    }
    void adddWork(){ // check hour and add salary
        if(hour>6){
            salary +=5;
        }
    }
    void display(){ // display salary and hour
        cout<<"salary: "<<salary<<"\nhour: "<<hour;
    }
};
int main(){
    Employee e1; // object of class
    int a,b;
    cout<<"\nEnter Salary:";
    cin>>a; // take salary as an input from user
    cout<<"\nEnter number of hours:";
    cin>>b; // take hours as an input from user

    e1.getInfo(a,b);
    e1.AddSal();
    e1.adddWork();
    e1.display();
    return 0;
}
