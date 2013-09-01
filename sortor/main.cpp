#include <iostream>
#include "sort_wrapper.h"
#include "quick_sort.h"

using std::cout;
using std::endl;

int main()
{
    QuickSortor<int> sortor; 
    SortWrapper<int> sort_wrapper(&sortor);
    //int array[] = {2,3,5,6,9,4,1,7,8,0};

    int array[] = { 12,45,0,2,9,8,63,-1,8,9 };
    sort_wrapper.SetArray(array, 10);
    sort_wrapper.Sort();
    
    for(int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}
