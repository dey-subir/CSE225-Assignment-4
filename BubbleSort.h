#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED
#include<vector>

class BubbleSort
{
public:
 BubbleSort();
 ~BubbleSort();
 void BubbleSorter(int *array, int n);
 void BubbleSorterVector(std::vector<int> & data);
};



#endif // BUBBLESORT_H_INCLUDED
