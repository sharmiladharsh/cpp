//one of the Method to Reverse a String -------> This runs from size-1 to 0 

/* #include<iostream>
using namespace std;
int main(){
    string name="Sharmi";
    int size=name.length();
    for(int i=size-1;i>=0;i--){
        cout<<name[i];
    }
} */

//The Other Method with less Time Complexity---------> This replaces a character from a two acting pointers each side and stores one value in temp and replaces the other values.


#include<iostream>
using namespace std;
int main(){
    string name="shara";
    int size=name.length();
    int pointer1=0, pointer2=size-1;
    while(pointer1<=pointer2){
        char ch=name[pointer1];
        name[pointer1]=name[pointer2];
        name[pointer2]=ch;
        pointer1++;
        pointer2--;
    }
    cout<<name;
}