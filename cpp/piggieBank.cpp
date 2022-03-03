/* Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class AddAmount with a data member named amount with an initial value of Rs. 50. */

#include<iostream>
using namespace std;
class addAmount{
    int amount=50;
    public:
    addAmount(){ // default constructor

    }
    addAmount(int amt){ //add amount into already existing salary by constructor
        amount += amt;
    }
    void display(){ // display salary
        cout<<"Final Amount:"<<amount<<endl;
    }
};
int main(){
    int addAmt;
    cout<<"Enter Amout to add in piggybank:";
    cin>>addAmt;//take amount as an input from user
    addAmount a1(addAmt); //call parameterized constructor by creating object
    a1.display(); //call method of other class using object

    return 0;
}
