#ifndef FSIN_H
#define FSIN_H

#include "function.h"
#include <math.h>

template <class number>
class Fsin : public Function<number>
{
    number* der_value;
    number* count_der(int& n)
    {
        der_value = new number[n+1];
        n++;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                der_value[i] = sin(0);
            else if (i % 4 == 1)
                der_value[i] = cos(0);
            else if (i % 4 == 3)
                der_value[i] = -cos(0);
        }
        return der_value;
    }
public:
    Fsin(int n) : Function<number> (n, count_der(n)) {};
    ~Fsin() {delete [] der_value;}
};


#endif // FSIN_H