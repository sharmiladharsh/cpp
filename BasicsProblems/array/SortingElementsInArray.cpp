#include<iostream>
using namespace std;
int main(){
    int size=10;
    int arr[size]={9,2,5,3,1,7,0,99,2,56};
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
}