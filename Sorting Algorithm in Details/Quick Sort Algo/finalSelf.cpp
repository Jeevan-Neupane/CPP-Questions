#include<iostream>
using namespace std;
int Pivot(int array[],int start,int end){
    int PivotEl=array[end];

    int i=-1;
    int j=0;

    while(j<=end-1){
        if(array[j]<PivotEl ){
            swap(array[++i],array[j]);

        }
        j++;
    }
    swap(array[i+1],array[end]);

    return i+1;

}

void QuickSort(int array[],int start,int end){
    if(start>=end){
        return;
    }
    int pivotPoint=Pivot(array,start,end);
    QuickSort(array,start,pivotPoint-1);
    QuickSort(array,pivotPoint+1,end);
}

int main(){
    int array[]={50,400,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    QuickSort(array,0,size-1);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }



    return 0;
}