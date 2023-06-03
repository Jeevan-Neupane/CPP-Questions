#include<iostream>
using namespace std;

void Conqueror(int array[],int start,int mid,int end){
    int sizeOfFirstArray=mid-start+1;
    int sizeOfSecond=end-mid;

    int array1[sizeOfFirstArray],array2[sizeOfSecond];

    for(int i=0;i<sizeOfFirstArray;i++){
        array1[i]=array[start+i];
    }
    for(int i=0;i<sizeOfSecond;i++){
        array2[i]=array[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=start;

    while(i<sizeOfFirstArray && j<sizeOfSecond){
        if(array1[i]<array2[j]){
            array[k++]=array1[i++];
        }
        else{
            array[k++]=array2[j++];
        }
    }

    while(i<sizeOfFirstArray){
        array[k++]=array1[i++];
    }
    while(j<sizeOfSecond){
        array[k++]=array2[j++];
    }

}
void MergeSort(int array[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    MergeSort(array,start,mid);
    MergeSort(array,mid+1,end);
    Conqueror(array,start,mid,end);
}

int main(){
    int array[]={9,200,1,700,4,8,100};
    int size=sizeof(array)/sizeof(array[0]);

    MergeSort(array,0,size-1);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }



    return 0;
}