#ifndef TAKA_H_INCLUDED
#define TAKA_H_INCLUDED

/* This Taka class contains two functions,
 * one operator overloading and one variable.
 */
class Taka
{
public:
//declaration of setter function
    void setter(int);

//declaration of print function
    void print();

//declaration of operator overloading
    Taka operator+(Taka);

private:
//declaration of integer variable
    int taka;
};


#endif // TAKA_H_INCLUDED
