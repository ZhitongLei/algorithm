#ifndef __SORT_WRAPPER__
#define __SORT_WRAPPER__

#include "sort.h"

template <typename T>
class SortWrapper
{
public:
    SortWrapper(Sortor<T>* Sortor = 0);
    void SetSortor(Sortor<T>* sortor);
    void SetArray(T* array, int n);
    void Sort();

private:
    Sortor<T>* m_sortor;
};

template <typename T>
SortWrapper<T>::SortWrapper(Sortor<T>* sortor)
: m_sortor(sortor)
{}

template <typename T>
void SortWrapper<T>::SetSortor(Sortor<T>* sortor)
{
    m_sortor = sortor;
}

template <typename T>
void SortWrapper<T>::SetArray(T* array, int n)
{
    m_sortor->SetArray(array, n);
}

template <typename T>
void SortWrapper<T>::Sort()
{
    m_sortor->Sort();
}

#endif /* __SORT_WRAPPER__*/
