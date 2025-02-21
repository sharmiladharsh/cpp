#include<iostream>
using namespace std;
int main(){
    string name="ShArMiLa";
    int size=name.length();
    for(int i=0;i<size;i++){
        if(islower(name[i])){
            name[i]=toupper(name[i]);
        }
        else{
            name[i]=tolower(name[i]);
        }
    }
    cout<<name;
}