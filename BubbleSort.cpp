#include "BubbleSort.h"
#include<iostream>
using namespace std;

BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(int *array, int n) {
    cout<<"Steps of Bubble Sort for Array::"<<endl;
 bool swapped = true;
 int num = 0;
 int temp;
 while (swapped) {
 swapped = false;
 num++;
 for (int index = 0; index < n - num; ++index) {
 if (array[index] > array[index + 1]) {
 temp = array[index];
 array[index] = array[index + 1];
 array[index + 1] = temp;
 for(int index=0;index<8;index++)
            {
                cout<<array[index]<<" ";
             }
             cout<<""<<endl;
 swapped = true;
 }
 }
 }

}
void BubbleSort:: BubbleSorterVector(vector<int> &data) {
    cout<<"Steps of Bubble Sort for Vector::"<<endl;
 bool swapped = true;
 int num = 0;
 int temp;
 while (swapped) {
 swapped = false;
 num++;
 for (int index= 0; index < data.size()- num; ++index) {
 if (data[index] > data[index + 1]) {
 temp = data[index];
 data[index] = data[index+ 1];
 data[index + 1] = temp;

 swapped = true;
  for (std::vector<int>::iterator val = data.begin(); val != data.end(); ++val)
    std::cout << *val <<" " ;
    cout<<""<<endl;
 }
 }
 }



}
