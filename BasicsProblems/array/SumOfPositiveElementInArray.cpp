#include<iostream>
using namespace std;
int main(){
    int num=3;
    int arr[num]={2,-2,3};
    int sum=0;
    for(int i=0;i<num;i++){
        if(arr[i]>0){
            sum=sum+arr[i];
        }  
    }
    cout<<sum;

}