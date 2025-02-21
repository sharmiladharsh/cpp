#include<iostream>
using namespace std;
int main(){
    int size=10;
    int arr[size]={9,2,5,3,1,7,130,99,2,56};
    int largenum=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largenum){
            largenum=arr[i];
        }
    }
    cout<<largenum;
    
}