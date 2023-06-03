#include<iostream>
using namespace std;

int DigitSum(int number){
    if(number<10){
        return number;
    }

   
    return (number%10)+DigitSum(number/10);
}

int main(){
    int number=1231234;

    int sum=DigitSum(number);

    if(sum>=10){
        sum=DigitSum(sum);

    }

    cout<<sum<<endl;



    return 0;
}