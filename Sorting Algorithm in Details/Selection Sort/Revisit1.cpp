//*Code are volatile need revision to remember


#include<iostream>
using namespace std;
void SelectionSort(int array[],int size){

    for(int i=0;i<size;i++){
        int minElIndx=i;

        for(int j=i+1;j<size;j++){
            if(array[j]<array[minElIndx]){
                minElIndx=j;
            }
        }

        swap(array[minElIndx],array[i]);
    }

}
int main(){
    int array[] = {3, 1, 5, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    SelectionSort(array,size);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }


    



    return 0;
}