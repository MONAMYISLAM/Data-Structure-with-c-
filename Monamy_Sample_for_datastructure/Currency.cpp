#include "Currency.h"


/* Implementation of the sum function of Currency
 * class.
 * The function is going to add two amounts of
 * currency, that can be of any data type(such
 * as integer, float etc.).
 * Adding to this,we can use any user defined
 * data type.
 */
template <class T>
T Currency<T>::sum(T amount1, T amount2)
{
    T sum=amount1+amount2;
    return sum;
}
