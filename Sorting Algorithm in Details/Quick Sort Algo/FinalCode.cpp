#include <iostream>

using namespace std;

int Partition(int array[],int start,int end){
    int i=start;
    int j=end;
    int pivotEl=array[j];

    while (i<j)
    {
        while (array[i]<pivotEl)
        {
            i++;
        }
        while (array[j]>pivotEl)
        {
            j--;
        }
        if(i<j){
            swap(array[i],array[j]);
        }
        
    }
    

    return i;
    

}
void QuickSort(int array[],int start,int end){
    if(start>=end){
        return ;
    }
  int partition=Partition(array,start,end);
  QuickSort(array,start,partition-1);
  QuickSort(array,partition+1,end);

}

int main()
{
    int array[] = {18, 12, 30, 16, 35, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int pivotEl = array[size - 1];

    QuickSort(array, 0, size - 1);

    for(int i:array){
        cout<<i<<endl;
    }

    return 0;
}