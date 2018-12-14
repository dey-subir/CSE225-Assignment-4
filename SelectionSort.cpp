#include "SelectionSort.h"
#include<iostream>
using namespace std;

SelectionSort::SelectionSort()
{

}
SelectionSort::~SelectionSort()
{


}
inline void Swap(int &a,int &b)
{
    int k=a;
    a=b;
    b=k;
}
void SelectionSort::SelectioSorter(int arr[],int arr_size)
{
    cout<<"Step of Selection Sort for Array:"<<endl;
    for(int index=0;index<arr_size-1;index++)
    {
        int min=index;
        for(int num=index+1;num<arr_size;num++)
        {
            if(arr[num]<arr[min])
                min=num;

                Swap(arr[min],arr[index]);


        }
        for(int index=0;index<arr_size;index++)
        {
            cout<<arr[index]<<" ";
        }
        cout<<""<<endl;

    }

}
	void SelectionSort::SelectioSorterVector(vector <int> &data)
{
    cout<<"Steps of Selection Sort using Vector"<<endl;
     int index,num, first_element, size = data.size();

     for ( index =0; index<size+1; index++ ){
         first_element = index;
         for ( num = index+1; num<size; num++ ){

             if ( data[num] < data[first_element] )
             first_element = num;
         }
     swap(data[first_element], data[index]);
     for (std::vector<int>::iterator val = data.begin();val != data.end(); ++val)
    std::cout << *val <<" " ;
    cout<<""<<endl;
     }
    ;

}

