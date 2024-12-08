#ifndef FSI_H
#define FSI_H

#include "function.h"

template <class number>
class FSi : public Function<number>
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
            {
                der_value[i] = cos(0);
                der_value[i] = der_value[i] / i;
            }
            else if (i % 4 == 3)
            {
                der_value[i] = -cos(0);
                der_value[i] = der_value[i] / i;
            }
        }
        return der_value;
    }
public:
    FSi(int n) : Function<number> (n, count_der(n)) {};
    ~FSi() {delete [] der_value;}
};

#endif // FSI_H
