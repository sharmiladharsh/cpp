#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num=123;
    while(num > 0){
        int remainder=num%10;
        sum=sum+remainder;
        num=num/10;    
    }
    cout << sum;
}