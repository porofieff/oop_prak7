#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
#include <QString>

using namespace std;


class complex
{
    double re, im;
public:
    complex();
    complex(double, double);
    complex(const int&);

    complex operator*(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator-();
    complex operator=(int);
    complex operator/(int);

    void operator+= (complex);

   //complex operator-(complex);
    bool operator<(complex);
    bool operator>(complex);
    friend complex sqrt (complex);
    friend ostream& operator<<(ostream&, complex);
    friend istream& operator>>(istream&, complex&);
    friend QString& operator<< (QString&, complex);
    friend complex sqrt (complex);
    friend complex pow (complex, double);
private:
    double count_module();
    double count_argument();

};

#endif // COMPLEX_H
