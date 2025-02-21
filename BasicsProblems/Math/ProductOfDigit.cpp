#include<iostream>
using namespace std;
int main(){
    int sum=1;
    int num=555;
    while(num > 0){
        int remainder=num%10;
        sum=sum*remainder;
        num=num/10;    
    }
    cout << sum;
}