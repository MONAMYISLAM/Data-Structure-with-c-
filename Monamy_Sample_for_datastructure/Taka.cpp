#include "Taka.h"
#include <iostream>
using namespace std;

/* print function prints the value of taka
variable
*/
void Taka::print()
{
    cout<<"the amount of taka is: $ "<<taka<<endl;
}
/* setter function sets an integer value in
taka variable. It takes an integer as parameter.
*/
void Taka::setter(int d)
{
    taka=d;
}

/*it is going to overload the '+' operator
*/
Taka Taka::operator+(Taka obj)
{
    Taka t;
    t.taka=taka +obj.taka;
    return t;
}


