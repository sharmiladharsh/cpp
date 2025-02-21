#include<iostream>
using namespace std;
int main(){
    int num=3;
    int arr[num]={1,2,3};
    int sum=0;
    for(int i=0;i<num;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}