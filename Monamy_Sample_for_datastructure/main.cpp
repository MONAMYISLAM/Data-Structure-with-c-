#include "Currency.cpp"
#include <iostream>
#include "Taka.h"
using namespace std;

int main()
{
    //creating an object of Taka class
    Taka t;
    //declaring an integer variable
    int money1;

    //prompting user for input
    cout<<"Enter an amount: "<<endl;
    //taking input and storing it
    cin>>money1;

    //calling setter function
    t.setter(money1);

    //calling print function
    t.print();

    //creating an object of Taka class
    Taka t2;
    //declaring an integer variable
    int money2;
    //prompting user for input
    cout<<"Enter an amount: "<<endl;
    //taking input and storing it
    cin>>money2;
    //calling setter function
    t2.setter(money2);
    //calling print function
    t2.print();

    //creating an object of Taka class
    Taka eksathe;
    //creating an object of Currency class
    //and passing Taka class as template argument
    Currency<Taka> perfect;

    //calling sum function
    eksathe=perfect.sum(t,t2);

    //calling print function
    eksathe.print();

    return 0;
}
