#include "MargeSort.h"
#include<iostream>
using namespace std;


MergeSort::MergeSort()
{
}
MergeSort::~MergeSort()
{
}
void Merger(int arr[], int lo, int mi, int hi)
{
 int *temp = new int[hi-lo+1];
 int index = lo, key = mi + 1;
 int lead= 0;
 while(index <= mi && key <=hi)
 {
 if(arr[index] <= arr[key])
 temp[lead++] = arr[index++];
 else
 temp[lead++] = arr[key++];
 }

 while(index <= mi)
 temp[lead++] = arr[index++];

 while(key<= hi)
 temp[lead++] = arr[key++];

  for(lead= 0, index= lo; index <= hi; ++index, ++lead)
 arr[index] = temp[lead];
 delete []temp;
    for(int index=0;index<8;index++)
            {
                cout<<arr[index]<<" ";
             }
             cout<<""<<endl;
}
void MergeSortHelper(int arr[], int lo, int hi)
{
 int mid;
 if(lo < hi)
 {
 mid = (lo + hi) / 2;
 MergeSortHelper(arr, lo, mid);
 MergeSortHelper(arr, mid+1, hi);
 Merger(arr, lo, mid, hi);
 }
}
void MergeSort::MergeSorter(int arr[], int arr_size)
{
    cout<<"Steps of Merge Sort for Array::"<<endl;
 MergeSortHelper(arr, 0, arr_size-1);


}
void MergerVector(std::vector<int> &data,int lo, int mi, int hi)
{
 int *temp = new int[hi-lo+1];
 int index = lo, num = mi + 1;
 int lead = 0;
 while(index <= mi && num <=hi)
 {
 if(data[index] <=data[num])
 temp[lead++] = data[index++];
 else
 temp[lead++] = data[num++];
 }

 while(index <= mi)
 temp[lead++] = data[index++];

 while(num <= hi)
 temp[lead++] = data[num++];

  for(lead = 0, index= lo; index <= hi; ++index, ++lead)
 data[index] = temp[lead];
 delete []temp;
 for (std::vector<int>::iterator val = data.begin(); val != data.end(); ++val)
    std::cout << *val <<" " ;
    cout<<""<<endl;

}
void MergeSortHelperVector(std::vector<int> & data, int lo, int hi)
{
 int mid;
 if(lo < hi)
 {
 mid = (lo + hi) / 2;
 MergeSortHelperVector(data, lo, mid);
 MergeSortHelperVector(data, mid+1, hi);
 MergerVector(data, lo, mid, hi);
 }
}
void MergeSort::MergeSorterVector(vector<int> &data)
{
    cout<<"Steps of Merge Sort for Vector::"<<endl;
 MergeSortHelperVector(data,0,data.size()-1);




}
