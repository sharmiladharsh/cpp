#include<iostream>
using namespace std;
int main(){
    int num=1;
    int divisor=0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            divisor=1;
        }
    }
    if(divisor==0){
        cout<<"It is a Prime Number";
    }
    else{
        cout<<"It is Not a Prime Number";
    }
    
}