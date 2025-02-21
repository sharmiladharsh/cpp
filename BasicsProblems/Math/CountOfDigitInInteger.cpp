#include<iostream>
using namespace std;
int main(){
    int count=0;
    int num=567;
    while(num > 0){
        count++;
        num=num/10;    
    }
    cout << count;
    return 0;
}