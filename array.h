#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <math.h>

using namespace std;

template <class number>
class Array
{
    number* arr;
    int size;

public:
    Array();
    Array(int);

    int sizeo();

    template <class T>
    friend istream& operator >> (istream&, Array<number>&);
    template <class T>
    friend ostream& operator << (ostream&, Array<number>&);

    void change_size(int);
    void change_element(int, number);

    number calculate_arefmetic_avarage();
    number calculate_square();
    number& operator[](int);

    void qsort(bool);

    ~Array();

};

// ToDO
//не работает сравнение чисел
//нужео сделать корень числа
//почемуто возникает ошибка и программа не отрабатывает 5 и 6 кейсы

template <class number>
Array<number>::Array()
{
    arr = nullptr;
    size = 0;
}

template <class number>
int Array<number>::sizeo()
{
    return size;
}
template <class number>
Array<number>::Array(int numb)
{
    number* arr2 = new number[numb];
    arr = arr2;
    size = numb;
}
template <class number>
istream& operator >> (istream& is, Array<number>& a)
{
    for (int i = 0; i < a.size; i++)
    {
        is>>a.arr[i];
    }
    return is;
}
template <class number>
ostream& operator << (ostream& os, Array<number>& a)
{
    for (int i = 0; i < a.size; i++)
    {
        os<<a.arr[i]<<" ";
    }
    os << endl;
    return os;
}

template <class number>
void Array<number>::change_size(int new_size)
{
    number* arr2 = new number[new_size];
    if (new_size > size)
    {
        for (int i = 0; i < size; i++)
            arr2[i] = arr[i];
    }
    else
    {
        for (int i = 0; i < new_size; i++)
            arr2[i] = arr[i];
    }
    if(arr != nullptr)
        delete[] arr;
    arr = arr2;
    size = new_size;
}


template <class number>
number& Array<number>::operator[](int i)
{
    return arr[i];
}

template <class number>
number Array<number>::calculate_arefmetic_avarage()
{
    number avg;
    for (int i = 0; i < size; i++)
    {
        avg = avg + arr[i];
    }
    return avg/size;
}

template <class number>
number Array<number>::calculate_square()
{
    number avg = calculate_arefmetic_avarage();
    number sum_dif;
    for (int i = 0; i < size; i++)
    {
        sum_dif = sum_dif + (avg-arr[i])*(avg-arr[i]);
    }
    number average_square = sqrt((sum_dif/(size-1)));
    return average_square;
}

template <class number>
void Array<number>::qsort(bool reverse)
{
    for (int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(!reverse)
            {
                if(arr[j] > arr[j+1])
                {
                    number temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            else
            {
                if(arr[j] < arr[j+1])
                {
                    number temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}

template <class number>
void Array<number>::change_element(int index, number elem)
{
    arr[index] = elem;
}

template <class number>
Array<number>::~Array()
{
    if(arr != nullptr)
        delete[] arr;
}


#endif // ARRAY_H
