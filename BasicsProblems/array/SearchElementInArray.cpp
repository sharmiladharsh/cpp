#include<iostream>
using namespace std;
int main(){
    int size=6;
    int target=1;
    int arr[size]={9,8,7,6,5,4};
    int ans=-1;
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            ans=i;
            break;
        }
    }
    cout<<ans;
}