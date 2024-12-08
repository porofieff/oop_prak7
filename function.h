#ifndef FUNCTION_H
#define FUNCTION_H

#include "polinome.h"

template <class number>
class Function : private Polinom<number>
{
    int fact(int);
public:
    Function(int, number*);
    using Polinom<number>::operator();
    using Polinom<number>::coefficients;
};

template <class number>
Function<number>::Function(int n, number* coefs) : Polinom<number>::Polinom(n, coefs)
{
    for (int i = 0; i < n; i++)
        coefficients[i] = coefficients[i]/fact(i);
}

template <class number>
int Function<number>::fact(int curr)
{
    if (curr == 0)
        return 1;
    if (curr == 1)
        return curr;
    else
        return fact(curr-1) * curr;
}

#endif // FUNCTION_H
