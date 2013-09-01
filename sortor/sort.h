#ifndef __SORTOR_H__
#define __SORTOR_H__

#include <stdio.h>

template <typename T>
class Sortor
{
public:
    //Sortor();
    Sortor(T* array = 0, int n = 0);
    void SetArray(T* array, int n);
    virtual void Sort() = 0;

protected:
    void Swap(T* x, T* y);

protected:
    T* m_array;
    int m_size;
};

template <typename T>
Sortor<T>::Sortor(T* array, int n)
:m_array(array), m_size(n)
{}

template <typename T>
void Sortor<T>::SetArray(T* array, int n)
{
    m_array = array;
    m_size = n;
}

template <typename T>
void Sortor<T>::Swap(T* x, T* y)
{
    T temp = *y;
    *y = *x;
    *x = temp;
}

#endif /* __SORTOR_H__ */
