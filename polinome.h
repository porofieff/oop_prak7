#ifndef POLINOM_H
#define POLINOM_H

#include "array.h"
#include <math.h>
#include <QString>

enum EPrintMode
{
    EPrintModeClassic,
    EPrintModeCanonic,
};

template <class number>
class Polinom
{
    EPrintMode printMode;
    Array<number> roots;
    int N;
protected:
    Array<number> coefficients;
public:
    Polinom();
    Polinom(int, number*);
    Polinom(number, number*, int);
    template <class T>
    friend ostream& operator<< (ostream&, Polinom<T>&);
    template <class T>
    friend QString& operator<< (QString&, Polinom<T>&);
    template <class T>
    friend istream& operator>> (istream&, Polinom<T>&);
    void set_print_mode (EPrintMode);
    number count_value (number);
    number operator()(number);
    void change_an (number);
    void change_root (number, size_t);
    void change_size (int);
    int get_size();
private:
    void count_coefficients(number);
};

#include <math.h>

template <class number>
Polinom<number>::Polinom()
{
    N = 0;
    printMode = EPrintModeClassic;
}

template <class number>
Polinom<number>::Polinom(int n, number* _coefficients)
{
    N = n;
    coefficients.change_size(N+1);
    for (int i = 0; i < N; i++)
        coefficients[i] = _coefficients[i];
    printMode = EPrintModeClassic;
}

template <class number>
Polinom<number>::Polinom(number _an, number* _roots, int _size)
{
    N = _size;
    roots.change_size(N);
    coefficients.change_size(N+1);
    for (int i = 0; i < N; i++)
        roots[i] = _roots[i];
    count_coefficients(_an);
    printMode = EPrintModeClassic;
}

template <class number>
void Polinom<number>::count_coefficients (number _an)

{
    for (int i = 0; i < N; i++)
        coefficients[i] = 0;
    coefficients[N] = _an;
    coefficients[1] = 1;
    coefficients[0] = -roots[0];
    for (int k = 2; k <= N; k++)
    {
        coefficients[k] = coefficients[k-1];
        for (int i = k-1; i > 0; i--)
            coefficients[i] = coefficients[i-1] - coefficients[i] * roots[k-1];
        coefficients[0] = -coefficients[0] * roots[k-1];
    }
    for (int i = 0; i <= N; i++)
        coefficients[i] = coefficients[i] * _an;
}

template <class number>
void Polinom<number>::set_print_mode (EPrintMode _printMode)
{
    printMode = _printMode;
}

template <class number>
ostream& operator<< (ostream& os, Polinom<number>& pol)
{
    if (pol.printMode == EPrintModeCanonic)
    {
        for (int i = pol.N; i > 0; i--)
            os << pol.coefficients[i] << " x^" << i << " + ";
        os << pol.coefficients[0] << std::endl;
    }
    else
    {
        os << pol.coefficients[pol.N] << " * ";
        for (int i = 0; i < pol.N - 1; i++)
            os << "(x - " << pol.roots[i] << ") * ";
        os << "(x - " << pol.roots[pol.N - 1] << ")" << std::endl;
    }
    return os;
}

template <class number>
QString& operator<< (QString& os, Polinom<number>& pol)
{
    if (pol.printMode == EPrintModeCanonic)
    {
        for (int i = pol.N; i > 0; i--)
        {
            os << pol.coefficients[i];
            os += " x^";
            os += QString().setNum(i);
            os += " + ";
        }
        os << pol.coefficients[0];
        os += "\n";
    }
    else
    {
        os << pol.coefficients[pol.N];
        os += " * ";
        for (int i = 0; i < pol.N - 1; i++)
        {
            os += "(x - ";
            os << pol.roots[i];
            os +=  ") * ";
        }
        os += "(x - ";
        os << pol.roots[pol.N - 1];
        os += ")";
        os += "\n";
    }
    return os;
}

template <class number>
istream& operator>> (istream& is, Polinom<number>& pol)
{
    is >> pol.coefficients[pol.N];
    for (int i = 0; i < pol.N; i++)
        is >> pol.roots[i];
    pol.count_coefficients(pol.coefficients[pol.N]);
    return is;
}

template <class number>
number Polinom<number>::count_value (number _point)
{
    number val = coefficients[N];
    for (int i = 0; i < N; i++)
        val = (_point - roots[i]) * val;
    return val;
}

template <class number>
number Polinom<number>::operator() (number _point)
{
    number val(0, 0);
    for (int i = N; i >= 0; i--)
        val += coefficients[i] * pow(_point, i);
    return val;
}

template <class number>
void Polinom<number>::change_an(number _an)
{
    coefficients[N] = _an;
    count_coefficients(coefficients[N]);
}

template <class number>
void Polinom<number>::change_root(number _new_root, size_t _index)
{
    roots[_index] = _new_root;
    count_coefficients(coefficients[N]);
}

template <class number>
void Polinom<number>::change_size(int new_size)
{
    roots.change_size(new_size);
    coefficients.change_size(new_size + 1);
    N = new_size;
}

template <class number>
int Polinom<number>::get_size()
{
    return N;
}


#endif // POLINOM_H
