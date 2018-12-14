#ifndef MARGESORT_H_INCLUDED
#define MARGESORT_H_INCLUDED
#include<vector>

class MergeSort
{
public:
 MergeSort();
 ~MergeSort();
 void MergeSorter(int arr[], int arr_size);
 void MergeSorterVector(std::vector<int> & data);
};

#endif // MARGESORT_H_INCLUDED
