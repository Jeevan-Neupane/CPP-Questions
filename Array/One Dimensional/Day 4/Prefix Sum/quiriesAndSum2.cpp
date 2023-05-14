#include<iostream>
using namespace std;

int main(){
    int array[]={0,1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<size;i++){
        array[i]+=array[i-1];


    }

    int quiriesNumber;
    cout<<"Enter  the number of quiries"<<endl;
    cin>>quiriesNumber;

    while (quiriesNumber--)
    {
        int l,r;
        cout<<"Enter the lowest number "<<endl;
        cin>>l;
        cout<<"Enter the highest number"<<endl;
        cin>>r;
        cout<<array[r]-array[l-1]<<endl;

    }
    

   


    return 0;
}