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
    int arrS[8];
    int arrI[8];
    int arrM[8];
    int arrB[8];
    for(int i=0;i<8;i++)
    {
        arrS[i]=arr[i];
        arrI[i]=arr[i];
        arrM[i]=arr[i];
        arrB[i]=arr[i];
    }
    SelectionSort obS;
    obS.SelectioSorter(arrS,8);
    cout<<"Final Selection Sort for Array::"<<endl;
    for(int index=0;index<8;index++)
    {
        cout<<arrS[index]<<" ";
    }
    cout<<"\n\n "<<endl;

    InsertionSort obI;
    obI.InsertionSorter(arrI,8);
     cout<<"Final Insertion Sort for Array::"<<endl;
 for(int index=0;index<8;index++)
    {
        cout<<arrI[index]<<" ";
    }
    cout<<"\n\n"<<endl;

    MergeSort obM;
    obM.MergeSorter(arrM,8);
    cout<<"Final Merge Sort for Array::"<<endl;
 for(int index=0;index<8;index++)
            {
                cout<<arrM[index]<<" ";
             }
             cout<<"\n\n"<<endl;

    BubbleSort obB;
    obB.BubbleSorter(arrB,8);
    cout<<"Final Bubble Sort for Array::"<<endl;
     for(int index=0;index<8;index++)
            {
                cout<<arrB[index]<<" ";
             }
             cout<<"\n\n"<<endl;

cout<<"Vector Part"<<endl;
    std::vector<int> vectorS(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorI(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorM(arr,arr+sizeof(arr)/sizeof(int));

   std::vector<int> vectorB(arr,arr+sizeof(arr)/sizeof(int));

    obS.SelectioSorterVector(vectorS);
     cout<<"Selection Sort Vector final"<<endl;
    for(int index=0;index<vectorS.size();index++)
        cout<<vectorS[index]<<" ";
        cout<<"\n"<<endl;

    obI.InsertionSorterVector(vectorI);
     cout<<"Final Insertion Sort for Vector::"<<endl;
    for(int index=0;index<vectorI.size();index++)
        cout<<vectorI[index]<<" ";
        cout<<"\n"<<endl;

    obM.MergeSorterVector(vectorM);
    cout<<"Final Merge Sort for Vector::"<<endl;
      for(int index=0;index<vectorM.size();index++)
        cout<<vectorM[index]<<" ";
        cout<<"\n"<<endl;

    obB.BubbleSorterVector(vectorB);
    cout<<"Final Bubble Sort for Vector::"<<endl;
    for(int index=0;index<vectorB.size();index++)
        cout<<vectorB[index]<<" ";
        cout<<"\n"<<endl;

    return 0;
}
