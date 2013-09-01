#ifndef __QUICK_SORTOR_H__
#define __QUICK_SORTOR_H__

#include "sort.h"

template <typename T>
class QuickSortor: public Sortor<T>
{
public:
    QuickSortor(T* array = 0, int n = 0);
    virtual void Sort();

private:
    void DoQuickSort(T* array, int low, int high);
};

template <typename T>
QuickSortor<T>::QuickSortor(T* array, int n)
:Sortor<T>(array, n)
{
}

template <typename T>
void QuickSortor<T>::Sort()
{
    DoQuickSort(this->m_array, 0, this->m_size - 1);
}

template <typename T>
void QuickSortor<T>::DoQuickSort(T* array, int low, int high)
{
    if(high - low <= 0)
    {
        return;    
    }
    else if(high - low == 1)
    {
        if(array[high] < array[low])
        {
            Swap(&array[high], &array[low]);
        }
        return;
    }

    int middle = (low + high)/2;
    int pivot = array[middle];
    Swap(&array[low], &array[middle]);

    int scanUp = low + 1;
    int scanDown = high;

    do
    {
        while(scanUp <= scanDown && array[scanUp] <= pivot)
        {
            scanUp ++;
        }

        while(pivot < array[scanDown])
        {
            scanDown --;
        }

        if(scanUp < scanDown)
        {
            Swap(&array[scanUp], &array[scanDown]);
        }
    } while(scanUp < scanDown);

    array[low] = array[scanDown];
    array[scanDown] = pivot;

    if(low < scanDown - 1)
        DoQuickSort(array, low, scanDown - 1);
    if(scanDown + 1 < high)
        DoQuickSort(array, scanDown + 1, high);
    
} 

#endif /* __QUICK_SORTOR_H__ */
