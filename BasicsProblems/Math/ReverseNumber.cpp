#include<iostream>
using namespace std;
int main(){
    int num=4567;
    int rev=0;
    while(num > 0){
        int ld = num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<rev;
}