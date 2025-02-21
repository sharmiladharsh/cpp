#include<iostream>
using namespace std;
int main(){
    string name="ShArmi";
    int size=name.length();
    int count=0;
    for(int i=0;i<size;i++){
        if(isupper(name[i])){
            count++;
        }
    }
    cout<<count;
}