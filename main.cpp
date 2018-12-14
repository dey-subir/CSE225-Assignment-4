#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MargeSort.h"
#include "BubbleSort.h"
#include<vector>

using namespace std;

int main()
{
    cout<<"Array Part"<<endl;
    int arr[]={14,33,27,10,35,19,48,44};
    int arraySelection[8];
    int arrayInsertion[8];
    int arrayMarge[8];
    int arrayBubble[8];
    for(int index=0;index<8;index++)
    {
        arraySelection[index]=arr[index];
        arrayInsertion[index]=arr[index];
        arrayMarge[index]=arr[index];
        arrayBubble[index]=arr[index];
    }
    SelectionSort objSelection;
    objSelection.SelectioSorter(arraySelection,8);
    cout<<"Final Selection Sort for Array::"<<endl;
    for(int index=0;index<8;index++)
    {
        cout<<arraySelection[index]<<" ";
    }
    cout<<"\n\n "<<endl;

    InsertionSort objInsertion;
    objInsertion.InsertionSorter(arrayInsertion,8);
     cout<<"Final Insertion Sort for Array::"<<endl;
 for(int index=0;index<8;index++)
    {
        cout<<arrayInsertion[index]<<" ";
    }
    cout<<"\n\n"<<endl;

    MergeSort objMarge;
    objMarge.MergeSorter(arrayMarge,8);
    cout<<"Final Merge Sort for Array::"<<endl;
 for(int index=0;index<8;index++)
            {
                cout<<arrayMarge[index]<<" ";
             }
             cout<<"\n\n"<<endl;

    BubbleSort objBubble;
    objBubble.BubbleSorter(arrayBubble,8);
    cout<<"Final Bubble Sort for Array::"<<endl;
     for(int index=0;index<8;index++)
            {
                cout<<arrayBubble[index]<<" ";
             }
             cout<<"\n\n"<<endl;

cout<<"Vector Part"<<endl;
    std::vector<int> vectorSelection(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorInsertion(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorMarge(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorBubble(arr,arr+sizeof(arr)/sizeof(int));

    objSelection.SelectioSorterVector(vectorSelection);
     cout<<"Selection Sort Vector final"<<endl;
    for(int index=0;index<vectorSelection.size();index++)
        cout<<vectorSelection[index]<<" ";
        cout<<"\n"<<endl;

    objInsertion.InsertionSorterVector(vectorInsertion);
     cout<<"Final Insertion Sort for Vector::"<<endl;
    for(int index=0;index<vectorInsertion.size();index++)
        cout<<vectorInsertion[index]<<" ";
        cout<<"\n"<<endl;

    objMarge.MergeSorterVector(vectorMarge);
    cout<<"Final Merge Sort for Vector::"<<endl;
      for(int index=0;index<vectorMarge.size();index++)
        cout<<vectorMarge[index]<<" ";
        cout<<"\n"<<endl;

    objBubble.BubbleSorterVector(vectorBubble);
    cout<<"Final Bubble Sort for Vector::"<<endl;
    for(int index=0;index<vectorBubble.size();index++)
        cout<<vectorBubble[index]<<" ";
        cout<<"\n"<<endl;

    return 0;
}
