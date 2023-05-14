#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(array)/sizeof(array[0]);
    int quiries;

    cout<<"Enter the number of quiries"<<endl;
    cin>>quiries;

    while (quiries--)
    {
        int from,to;
        cout<<"From "<<endl;
        cin>>from;
        cout<<"To "<<endl;
        cin>>to;
        int sum=0;
        for(int i=from-1;i<to;i++){
            sum=array[i]+sum;



        }

        cout<<"The sum of range is "<<sum<<endl;
    }
    



    return 0;
}