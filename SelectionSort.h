#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include<vector>

class SelectionSort
{
public:
    SelectionSort();
    ~SelectionSort();
    void SelectioSorter(int arr[],int arr_size);
    void SelectioSorterVector(std::vector<int> & data);
};
#endif // SELECTIONSORT_H_INCLUDED
