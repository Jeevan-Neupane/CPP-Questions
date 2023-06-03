#include <iostream>
using namespace std;

void Merge(int newArr[], int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;
    int leftArray[size1];
    int rightArray[size2];


    for(int i=0;i<size1;i++){
        leftArray[i]=newArr[start+i];
    }
    for(int i=0;i<size2;i++){
        rightArray[i]=newArr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=start;
   

    while(i<size1 && j<size2){
        if(leftArray[i]<rightArray[j]){
            newArr[k++]=leftArray[i++];
        }
        else{
            newArr[k++]=rightArray[j++];
        }

    }
    while (i<size1)
    {
        newArr[k++]=leftArray[i++];
    }
    while(j<size2){
        newArr[k++]=leftArray[j++];
    }
    

    

   

}

void Divide(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    Divide(array, start, mid);
    Divide(array, mid + 1, end);
    Merge(array,start,mid,end);
}

int main()
{
    int array[] = {9, 2, 1, 7, 4,8,5};

    int size = sizeof(array) / sizeof(array[0]);

    Divide(array, 0, size - 1);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}