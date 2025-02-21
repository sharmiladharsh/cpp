#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int num=2525,count=0,sum=0,temp;
    temp=num;
    while(temp>0){
        count++;
        temp/=10;
    }
    cout<<"Count of a Number is: " <<count<<endl;
    temp=num;
    while(temp>0){
        int root=temp%10;
        sum = sum+pow(root,count);
        temp/=10;
    }
    cout<<"Armstrong Sum is: "<< sum<<endl;
    
    if(sum==num){
        cout<<"It is an Armstrong Number";
    }
    else{
        cout<<"Its not an Armstrong Number";
    }
}